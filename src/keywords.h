/*
 *	Keywords list for ucvim
 *	This file is in the public domain.
 */

/* Language IDs for lang-specific highlighting rules */
#define L_DEFAULT 0
#define L_LUA 1
#define L_HTML 2

/* Default keyword color for most languages */
#define KC COLOR_BRIGHT_MAGENTA

kwtype __cKeywordsRaw[] = {
	UCL("int"), UCL("long"), UCL("short"), UCL("char"), UCL("void"),
	UCL("float"), UCL("double"), UCL("unsigned"), UCL("signed"),
	UCL("bool"), UCL("_Bool"), UCL("size_t"), UCL("ssize_t"),
	UCL("wchar_t"), UCL("FILE"), UCL("NULL"),
	UCL("const"), UCL("volatile"), UCL("static"), UCL("extern"),
	UCL("auto"), UCL("register"), UCL("inline"), UCL("restrict"),
	UCL("if"), UCL("else"), UCL("for"), UCL("while"), UCL("do"),
	UCL("switch"), UCL("case"), UCL("default"), UCL("break"),
	UCL("continue"), UCL("return"), UCL("goto"),
	UCL("struct"), UCL("union"), UCL("enum"), UCL("typedef"),
	UCL("sizeof"), UCL("typeof"), UCL("asm"),
	UCL("printf"), UCL("fprintf"), UCL("sprintf"), UCL("snprintf"),
	UCL("scanf"), UCL("fscanf"), UCL("sscanf"),
	UCL("malloc"), UCL("calloc"), UCL("realloc"), UCL("free"),
	UCL("memcpy"), UCL("memset"), UCL("memmove"), UCL("memcmp"),
	UCL("strlen"), UCL("strcpy"), UCL("strncpy"), UCL("strcat"),
	UCL("strcmp"), UCL("strncmp"), UCL("strchr"), UCL("strrchr"),
	UCL("strstr"), UCL("strdup"),
	UCL("fopen"), UCL("fclose"), UCL("fread"), UCL("fwrite"),
	UCL("fgets"), UCL("fputs"), UCL("feof"), UCL("ferror"),
	UCL("fflush"), UCL("fseek"), UCL("ftell"), UCL("rewind"),
	UCL("getchar"), UCL("putchar"), UCL("gets"), UCL("puts"),
	UCL("exit"), UCL("abort"), UCL("atexit"),
	UCL("atoi"), UCL("atof"), UCL("atol"),
	UCL("strtol"), UCL("strtoul"), UCL("strtod"),
	UCL("isalpha"), UCL("isdigit"), UCL("isalnum"), UCL("isspace"),
	UCL("isupper"), UCL("islower"), UCL("toupper"), UCL("tolower"),
	UCL("signal"), UCL("raise"),
	UCL("true"), UCL("false"),
	NULL
};
/* Auto-wrap raw kwtype array into Keyword array with default color */
static Keyword __cKeywords[sizeof(__cKeywordsRaw)/sizeof(__cKeywordsRaw[0])];

kwtype __luaKeywordsRaw[] = {
	UCL("local"), UCL("return"), UCL("if"),
	UCL("then"), UCL("else"), UCL("elseif"), UCL("end"),
	UCL("for"), UCL("in"), UCL("do"), UCL("while"), UCL("repeat"),
	UCL("until"), UCL("break"), UCL("goto"),
	UCL("and"), UCL("or"), UCL("not"), UCL("nil"),
	UCL("print"), UCL("error"), UCL("assert"), UCL("pcall"),
	UCL("xpcall"), UCL("require"), UCL("dofile"), UCL("loadfile"),
	UCL("type"), UCL("tostring"), UCL("tonumber"), UCL("pairs"),
	UCL("ipairs"), UCL("next"), UCL("select"), UCL("unpack"),
	UCL("rawget"), UCL("rawset"), UCL("setmetatable"), UCL("getmetatable"),
	UCL("string"), UCL("byte"), UCL("char"), UCL("find"),
	UCL("format"), UCL("gmatch"), UCL("gsub"), UCL("len"),
	UCL("lower"), UCL("match"), UCL("rep"), UCL("reverse"),
	UCL("sub"), UCL("upper"),
	UCL("math"), UCL("abs"), UCL("ceil"), UCL("floor"),
	UCL("max"), UCL("min"), UCL("sqrt"), UCL("sin"), UCL("cos"),
	UCL("tan"), UCL("exp"), UCL("log"), UCL("pi"),
	UCL("io"), UCL("open"), UCL("close"), UCL("read"),
	UCL("write"), UCL("lines"),
	UCL("table"), UCL("insert"), UCL("remove"), UCL("sort"), UCL("concat"),
	UCL("os"), UCL("execute"), UCL("exit"), UCL("clock"), UCL("date"),
	UCL("coroutine"), UCL("create"), UCL("resume"), UCL("yield"), UCL("wrap"),
	NULL
};
static Keyword __luaKeywords[sizeof(__luaKeywordsRaw)/sizeof(__luaKeywordsRaw[0])];

kwtype __shellKeywordsRaw[] = {
	UCL("if"), UCL("then"), UCL("else"), UCL("elif"), UCL("fi"),
	UCL("for"), UCL("do"), UCL("done"), UCL("while"), UCL("until"),
	UCL("case"), UCL("esac"), UCL("in"), UCL("break"), UCL("continue"),
	UCL("return"), UCL("exit"), UCL("test"),
	UCL("echo"), UCL("printf"), UCL("read"), UCL("cd"), UCL("pwd"),
	UCL("ls"), UCL("cat"), UCL("cp"), UCL("mv"), UCL("rm"),
	UCL("mkdir"), UCL("rmdir"), UCL("chmod"), UCL("chown"),
	UCL("grep"), UCL("sed"), UCL("awk"), UCL("find"), UCL("sort"),
	UCL("uniq"), UCL("wc"), UCL("head"), UCL("tail"),
	UCL("tr"), UCL("cut"), UCL("paste"), UCL("join"),
	UCL("tar"), UCL("gzip"), UCL("gunzip"), UCL("bzip2"),
	UCL("ps"), UCL("kill"), UCL("killall"), UCL("bg"), UCL("fg"),
	UCL("jobs"), UCL("wait"), UCL("sleep"),
	UCL("touch"), UCL("ln"), UCL("stat"), UCL("file"),
	UCL("which"), UCL("whereis"), UCL("man"), UCL("info"),
	UCL("date"), UCL("cal"), UCL("uptime"),
	UCL("env"), UCL("export"), UCL("set"), UCL("unset"),
	UCL("source"), UCL("alias"), UCL("unalias"),
	UCL("true"), UCL("false"), UCL("yes"),
	UCL("PATH"), UCL("HOME"), UCL("USER"), UCL("SHELL"),
	UCL("PWD"), UCL("OLDPWD"), UCL("TMPDIR"),
	UCL("LANG"), UCL("LC_ALL"), UCL("TERM"),
	NULL
};
static Keyword __shellKeywords[sizeof(__shellKeywordsRaw)/sizeof(__shellKeywordsRaw[0])];

kwtype __cppKeywordsRaw[] = {
	UCL("int"), UCL("long"), UCL("short"), UCL("char"), UCL("void"),
	UCL("float"), UCL("double"), UCL("unsigned"), UCL("signed"),
	UCL("bool"), UCL("auto"), UCL("wchar_t"), UCL("string"),
	UCL("size_t"), UCL("nullptr"), UCL("NULL"),
	UCL("const"), UCL("volatile"), UCL("static"), UCL("extern"),
	UCL("inline"), UCL("virtual"), UCL("override"), UCL("final"),
	UCL("explicit"), UCL("mutable"), UCL("constexpr"),
	UCL("if"), UCL("else"), UCL("for"), UCL("while"), UCL("do"),
	UCL("switch"), UCL("case"), UCL("default"), UCL("break"),
	UCL("continue"), UCL("return"), UCL("goto"),
	UCL("struct"), UCL("class"), UCL("union"), UCL("enum"),
	UCL("typedef"), UCL("typename"), UCL("namespace"),
	UCL("using"), UCL("template"),
	UCL("new"), UCL("delete"), UCL("this"), UCL("operator"),
	UCL("friend"), UCL("public"), UCL("private"), UCL("protected"),
	UCL("try"), UCL("catch"), UCL("throw"), UCL("noexcept"),
	UCL("concept"), UCL("requires"),
	UCL("true"), UCL("false"),
	UCL("vector"), UCL("list"), UCL("map"), UCL("set"),
	UCL("unordered_map"), UCL("unordered_set"),
	UCL("deque"), UCL("queue"), UCL("stack"), UCL("array"),
	UCL("unique_ptr"), UCL("shared_ptr"), UCL("weak_ptr"),
	UCL("cin"), UCL("cout"), UCL("cerr"), UCL("endl"),
	UCL("ifstream"), UCL("ofstream"), UCL("fstream"),
	UCL("std"), UCL("move"), UCL("forward"), UCL("swap"),
	UCL("make_pair"), UCL("make_tuple"),
	NULL
};
static Keyword __cppKeywords[sizeof(__cppKeywordsRaw)/sizeof(__cppKeywordsRaw[0])];

kwtype __rclangKeywordsRaw[] = {
	UCL("val"), UCL("sal"), UCL("s8"), UCL("u8"), UCL("s16"), UCL("u16"),
	UCL("s32"), UCL("u32"), UCL("s64"), UCL("u64"), UCL("for"), UCL("fn"),
	UCL("if"), UCL("else"), UCL("dcl"), UCL("ret"), UCL("break"),
	UCL("export"), UCL("szo"), UCL("ptr"),
	NULL
};
static Keyword __rclangKeywords[sizeof(__rclangKeywordsRaw)/sizeof(__rclangKeywordsRaw[0])];

kwtype __golangKeywordsRaw[] = {
	UCL("go"), UCL("func"), UCL("int"), UCL("uint"), UCL("byte"),
	UCL("int8"), UCL("int16"), UCL("int32"), UCL("int64"), UCL("uint8"),
	UCL("uint16"), UCL("uint32"), UCL("uint64"), UCL("string"), UCL("map"),
	UCL("make"), UCL("len"), UCL("struct"), UCL("type"), UCL("import"),
	UCL("return"), UCL("package"), UCL("if"), UCL("for"), UCL("else"),
	UCL("select"), UCL("switch"), UCL("chan"), UCL("bool"), UCL("true"),
	UCL("false"), UCL("continue"), UCL("break"), UCL("nil"), UCL("case"),
	UCL("var"), UCL("any"), UCL("interface"), UCL("defer"), UCL("range"),
	UCL("error"), UCL("append"), UCL("copy"), UCL("delete"),
	UCL("cap"), UCL("close"), UCL("complex"), UCL("imag"), UCL("real"),
	UCL("panic"), UCL("recover"), UCL("new"), UCL("print"), UCL("println"),
	NULL
};
static Keyword __golangKeywords[sizeof(__golangKeywordsRaw)/sizeof(__golangKeywordsRaw[0])];

kwtype __elmKeywordsRaw[] = {
	UCL("module"), UCL("Cmd"), UCL("Sub"), UCL("List"), UCL("type"),
	UCL("alias"), UCL("case"), UCL("of"), UCL("import"),
	UCL("exposing"), UCL("as"), UCL("String"), UCL("Int"), UCL("if"),
	UCL("then"), UCL("else"), UCL("Maybe"), UCL("Result"), UCL("Just"),
	UCL("Nothing"), UCL("True"), UCL("False"), UCL("Err"), UCL("Ok"),
	UCL("Bool"),
	NULL
};
static Keyword __elmKeywords[sizeof(__elmKeywordsRaw)/sizeof(__elmKeywordsRaw[0])];

kwtype __haskellKeywordsRaw[] = {
	UCL("module"), UCL("where"), UCL("let"), UCL("in"), UCL("import"),
	UCL("hiding"), UCL("qualified"), UCL("instance"), UCL("class"),
	UCL("case"), UCL("of"), UCL("if"), UCL("then"), UCL("else"), UCL("do"),
	UCL("type"), UCL("data"), UCL("newtype"),
	UCL("Bool"), UCL("Char"), UCL("Double"), UCL("Either"), UCL("Enum"),
	UCL("Float"), UCL("IO"), UCL("Int"), UCL("Integer"),
	UCL("Just"), UCL("Maybe"), UCL("Num"), UCL("Ord"),
	UCL("Read"), UCL("Real"), UCL("Semigroup"), UCL("Show"),
	UCL("String"), UCL("Word"),
	NULL
};
static Keyword __haskellKeywords[sizeof(__haskellKeywordsRaw)/sizeof(__haskellKeywordsRaw[0])];

kwtype __m4KeywordsRaw[] = {
	UCL("dnl"), UCL("define"), UCL("defn"), UCL("indir"), UCL("pushdef"),
	UCL("popdef"), UCL("builtin"), UCL("ifdef"), UCL("ifelse"), UCL("shift"),
	UCL("include"), UCL("dumpdef"), UCL("traceon"), UCL("traceoff"),
	UCL("debugmode"), UCL("debugfile"), UCL("changequote"), UCL("changecom"),
	UCL("m4wrap"), UCL("sinclude"), UCL("divert"), UCL("undivert"),
	UCL("divnum"), UCL("len"), UCL("index"), UCL("regexp"), UCL("substr"),
	UCL("translit"), UCL("patsubst"), UCL("format"), UCL("incr"),
	UCL("decr"), UCL("eval"), UCL("syscmd"), UCL("esyscmd"), UCL("sysval"),
	UCL("mkstemp"), UCL("maketemp"), UCL("errprint"), UCL("m4exit"),
	NULL
};
static Keyword __m4Keywords[sizeof(__m4KeywordsRaw)/sizeof(__m4KeywordsRaw[0])];

kwtype __htmlKeywordsRaw[] = {
	UCL("class"), UCL("id"), UCL("href"), UCL("src"),
	UCL("alt"), UCL("title"), UCL("type"), UCL("name"),
	UCL("value"), UCL("placeholder"), UCL("disabled"),
	UCL("required"), UCL("checked"), UCL("selected"),
	UCL("onclick"), UCL("onload"),
	NULL
};
static Keyword __htmlKeywords[sizeof(__htmlKeywordsRaw)/sizeof(__htmlKeywordsRaw[0])];

kwtype __markdownKeywordsRaw[] = {
	UCL("nbsp"), UCL("amp"), UCL("lt"), UCL("gt"),
	NULL
};
static Keyword __markdownKeywords[sizeof(__markdownKeywordsRaw)/sizeof(__markdownKeywordsRaw[0])];

/*
 *	Per-keyword color tables for Lua.
 */
Keyword __luaKW[] = {
	/* Control flow - bright magenta */
	KW("local", COLOR_BRIGHT_MAGENTA),
	KW("function", COLOR_BRIGHT_MAGENTA),
	KW("return", COLOR_BRIGHT_MAGENTA),
	KW("if", COLOR_BRIGHT_MAGENTA),
	KW("then", COLOR_BRIGHT_MAGENTA),
	KW("else", COLOR_BRIGHT_MAGENTA),
	KW("elseif", COLOR_BRIGHT_MAGENTA),
	KW("end", COLOR_BRIGHT_MAGENTA),
	KW("for", COLOR_BRIGHT_MAGENTA),
	KW("in", COLOR_BRIGHT_MAGENTA),
	KW("do", COLOR_BRIGHT_MAGENTA),
	KW("while", COLOR_BRIGHT_MAGENTA),
	KW("repeat", COLOR_BRIGHT_MAGENTA),
	KW("until", COLOR_BRIGHT_MAGENTA),
	KW("break", COLOR_BRIGHT_MAGENTA),
	KW("goto", COLOR_BRIGHT_MAGENTA),
	/* Values */
	KW("true", COLOR_GREEN),
	KW("false", COLOR_RED),
	KW("nil", COLOR_RED),
	/* Operators */
	KW("and", COLOR_BRIGHT_MAGENTA),
	KW("or", COLOR_BRIGHT_MAGENTA),
	KW("not", COLOR_BRIGHT_MAGENTA),
	/* Standard library - bright cyan */
	KW("print", COLOR_CYAN),
	KW("error", COLOR_CYAN),
	KW("assert", COLOR_CYAN),
	KW("pcall", COLOR_CYAN),
	KW("xpcall", COLOR_CYAN),
	KW("require", COLOR_CYAN),
	KW("dofile", COLOR_CYAN),
	KW("loadfile", COLOR_CYAN),
	KW("type", COLOR_CYAN),
	KW("tostring", COLOR_CYAN),
	KW("tonumber", COLOR_CYAN),
	KW("pairs", COLOR_CYAN),
	KW("ipairs", COLOR_CYAN),
	KW("next", COLOR_CYAN),
	KW("select", COLOR_CYAN),
	KW("unpack", COLOR_CYAN),
	KW("rawget", COLOR_CYAN),
	KW("rawset", COLOR_CYAN),
	KW("setmetatable", COLOR_CYAN),
	KW("getmetatable", COLOR_CYAN),
	KW("string", COLOR_CYAN),
	KW("byte", COLOR_CYAN),
	KW("char", COLOR_CYAN),
	KW("find", COLOR_CYAN),
	KW("format", COLOR_CYAN),
	KW("gmatch", COLOR_CYAN),
	KW("gsub", COLOR_CYAN),
	KW("len", COLOR_CYAN),
	KW("lower", COLOR_CYAN),
	KW("match", COLOR_CYAN),
	KW("rep", COLOR_CYAN),
	KW("reverse", COLOR_CYAN),
	KW("sub", COLOR_CYAN),
	KW("upper", COLOR_CYAN),
	KW("math", COLOR_CYAN),
	KW("abs", COLOR_CYAN),
	KW("ceil", COLOR_CYAN),
	KW("floor", COLOR_CYAN),
	KW("max", COLOR_CYAN),
	KW("min", COLOR_CYAN),
	KW("sqrt", COLOR_CYAN),
	KW("sin", COLOR_CYAN),
	KW("cos", COLOR_CYAN),
	KW("tan", COLOR_CYAN),
	KW("exp", COLOR_CYAN),
	KW("log", COLOR_CYAN),
	KW("pi", COLOR_CYAN),
	KW("io", COLOR_CYAN),
	KW("open", COLOR_CYAN),
	KW("close", COLOR_CYAN),
	KW("read", COLOR_CYAN),
	KW("write", COLOR_CYAN),
	KW("lines", COLOR_CYAN),
	KW("table", COLOR_CYAN),
	KW("insert", COLOR_CYAN),
	KW("remove", COLOR_CYAN),
	KW("sort", COLOR_CYAN),
	KW("concat", COLOR_CYAN),
	KW("os", COLOR_CYAN),
	KW("execute", COLOR_CYAN),
	KW("exit", COLOR_CYAN),
	KW("clock", COLOR_CYAN),
	KW("date", COLOR_CYAN),
	KW("coroutine", COLOR_CYAN),
	KW("create", COLOR_CYAN),
	KW("resume", COLOR_CYAN),
	KW("yield", COLOR_CYAN),
	KW("wrap", COLOR_CYAN),
	KW_END
};

Keyword_Class K[] = {
	{ ".c", L_DEFAULT, __cKeywords },
	{ ".h", L_DEFAULT, __cKeywords },
	{ ".lua", L_LUA, __luaKW },
	{ ".sh", L_DEFAULT, __shellKeywords },
	{ ".cc", L_DEFAULT, __cppKeywords },
	{ ".cpp", L_DEFAULT, __cppKeywords },
	{ ".hpp", L_DEFAULT, __cppKeywords },
	{ ".cxx", L_DEFAULT, __cppKeywords },
	{ ".rcs", L_DEFAULT, __rclangKeywords },
	{ ".go", L_DEFAULT, __golangKeywords },
	{ ".elm", L_DEFAULT, __elmKeywords },
	{ ".hs", L_DEFAULT, __haskellKeywords },
	{ ".m4", L_DEFAULT, __m4Keywords },
	{ ".ac", L_DEFAULT, __m4Keywords },
	{ ".html", L_HTML, __htmlKeywords },
	{ ".htm", L_HTML, __htmlKeywords },
	{ ".md", L_DEFAULT, __markdownKeywords },
	{ ".markdown", L_DEFAULT, __markdownKeywords },
	{ NULL, 0, NULL },
};

/*
 *	Initialize the auto-wrapped Keyword arrays from raw kwtype arrays.
 *	Called once at startup.
 */
static void initKeywords(void)
{
	int i;
	for (i = 0; __cKeywordsRaw[i]; i++) {
		__cKeywords[i].word = __cKeywordsRaw[i];
		__cKeywords[i].color = KC;
	}
	__cKeywords[i].word = NULL; __cKeywords[i].color = 0;

	for (i = 0; __luaKeywordsRaw[i]; i++) {
		__luaKeywords[i].word = __luaKeywordsRaw[i];
		__luaKeywords[i].color = KC;
	}
	__luaKeywords[i].word = NULL; __luaKeywords[i].color = 0;

	for (i = 0; __shellKeywordsRaw[i]; i++) {
		__shellKeywords[i].word = __shellKeywordsRaw[i];
		__shellKeywords[i].color = KC;
	}
	__shellKeywords[i].word = NULL; __shellKeywords[i].color = 0;

	for (i = 0; __cppKeywordsRaw[i]; i++) {
		__cppKeywords[i].word = __cppKeywordsRaw[i];
		__cppKeywords[i].color = KC;
	}
	__cppKeywords[i].word = NULL; __cppKeywords[i].color = 0;

	for (i = 0; __rclangKeywordsRaw[i]; i++) {
		__rclangKeywords[i].word = __rclangKeywordsRaw[i];
		__rclangKeywords[i].color = KC;
	}
	__rclangKeywords[i].word = NULL; __rclangKeywords[i].color = 0;

	for (i = 0; __golangKeywordsRaw[i]; i++) {
		__golangKeywords[i].word = __golangKeywordsRaw[i];
		__golangKeywords[i].color = KC;
	}
	__golangKeywords[i].word = NULL; __golangKeywords[i].color = 0;

	for (i = 0; __elmKeywordsRaw[i]; i++) {
		__elmKeywords[i].word = __elmKeywordsRaw[i];
		__elmKeywords[i].color = KC;
	}
	__elmKeywords[i].word = NULL; __elmKeywords[i].color = 0;

	for (i = 0; __haskellKeywordsRaw[i]; i++) {
		__haskellKeywords[i].word = __haskellKeywordsRaw[i];
		__haskellKeywords[i].color = KC;
	}
	__haskellKeywords[i].word = NULL; __haskellKeywords[i].color = 0;

	for (i = 0; __m4KeywordsRaw[i]; i++) {
		__m4Keywords[i].word = __m4KeywordsRaw[i];
		__m4Keywords[i].color = KC;
	}
	__m4Keywords[i].word = NULL; __m4Keywords[i].color = 0;

	for (i = 0; __htmlKeywordsRaw[i]; i++) {
		__htmlKeywords[i].word = __htmlKeywordsRaw[i];
		__htmlKeywords[i].color = KC;
	}
	__htmlKeywords[i].word = NULL; __htmlKeywords[i].color = 0;

	for (i = 0; __markdownKeywordsRaw[i]; i++) {
		__markdownKeywords[i].word = __markdownKeywordsRaw[i];
		__markdownKeywords[i].color = KC;
	}
	__markdownKeywords[i].word = NULL; __markdownKeywords[i].color = 0;
}
