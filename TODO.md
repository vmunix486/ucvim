# mVim TODO List

 - Fix that the cursor position is wrong when a line with wide characters is auto-wrapped
 - History Tracing Fixes
 - Improve user experience of cutting and yanking
 - Improve performance of pasting large chunk of context into the editor

# ucvim TODO List

 - Better code highlighting (Markdown, Shell Scripts)
 - Add support for saving options in a file (eg. ~/.ucvimrc.ini on Unix/MSYS2, C:\Documents and Settings\$(USER)\ucvimrc.ini for Windows) (putting off for now)
 - Test support on older operating systems and gcc versions
 - Make source code much more readable (with lots of code comments)
 - Fix some of the highlighting for Github Markdown
 - Startup screen (with no arguments, go to start screen with ASCII art (figlet) of ucVim with some things to do next)
 - `:l` - load - loads a file, makes a new one if it doesn't exist. Prompts the user if they want to save the current file or not.
 - Color newlines (\n) in purple (like vim)
 - `:!i command` runs the system command given and writes the output of it into the current text file at the cursor location
 - Scrolling a lot up and down causes the top line of the text to be highlighted in the terminal's default background hightlight color. Unrelated to opening and closing brackets, parenthesis, and curly brackets. (I use Konsole as my default terminal. Selecting text in Konsole causes it to make the background color text white, just like the bug at the top of ucvim.)
 - Add support for deleting by word with CTRL+Backspace and CTRL+Delete
 - Fix bug where the cursor and the text can become disconnected from eachother, causing the cursor to be 1 line down and sometimes 1 character forward from where the text should actually be. Probably a problem retaining to handling text wrapping. Or something else. It sometimes happens when you open the editor, and change terminal sizes within the editor, so it might be handlining terminal size incorrectly, and thinking the cursor is in the correct place, when the actual cursor rendered by the terminal is in someplace else. Maybe sync the terminal cursor location with the editor cursor location.
 - Sometimes the gutter just... doesn't show up? (like while editing this)
 - When typing a line that wraps around on the last rendered line, it creates a new line that does not wrap around (makes a literal new line, and doesn't keep it on the same line)
 
 
## Performance

 - Syntax highlighting preforms lots of expensive operations on every redraw, such as repeated string searching for Lua, complex state tracking for comments, HTML tags, and code blocks, nested loops for markdown highlighting, and keyword matching by character in a loop.
 - `expandTab` and `unexpandTab` functions call `editorRowInsertChar` and `editorTowDelChar`, which reallocates the entire row's chaacter buffeer, meaning that files with lots of tabs causes performance to suffer.
 - Full screen redraw on every keypress. This can be a problem on very slow computers, large terminals, or complex syntax.
 - Linear search in Undo/Redo. The circular buffer doesn't prevent O(historySize) searches, and there's no optimization for recent changes. Every undo/redo accesses memory potentially far from the working set.
 - Inefficient Search Implementation. Called for every row until a match is found, and there is no caching or early termination optimization beyond the first match.
 - Expensive Wide Character operations in Hot Paths. `wcwidth` can be slow for wide character detection, and is called for every visible character on every screen refresh.
 - Unbounded position stack. No prevention of stack exhaustion. If the stack overflows, it only alerts the user and there is no recovery mechanism. Under repeated push operations, it could degrade performance.
 - Inefficient keyword lookup. Clearing and rebuilding function/variable name tracking on every file open. No incremental parsing or caching. For files with thousands of fucntions, it rescans everything on each open.
 - String Concatenation in Copy operations. `strcat` scans to end of string each call.
