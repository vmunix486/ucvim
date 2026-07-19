/*
 *	Keywords list for ucvim
 *	This file is in the public domain.
 */

kwtype __cKeywords[] = {
	/* Types */
	UCL("int"), UCL("long"), UCL("short"), UCL("char"), UCL("void"),
	UCL("float"), UCL("double"), UCL("unsigned"), UCL("signed"),
	UCL("bool"), UCL("_Bool"), UCL("size_t"), UCL("ssize_t"),
	UCL("wchar_t"), UCL("FILE"), UCL("NULL"),
	/* Modifiers */
	UCL("const"), UCL("volatile"), UCL("static"), UCL("extern"),
	UCL("auto"), UCL("register"), UCL("inline"), UCL("restrict"),
	/* Control flow */
	UCL("if"), UCL("else"), UCL("for"), UCL("while"), UCL("do"),
	UCL("switch"), UCL("case"), UCL("default"), UCL("break"),
	UCL("continue"), UCL("return"), UCL("goto"),
	/* Structures */
	UCL("struct"), UCL("union"), UCL("enum"), UCL("typedef"),
	/* Operators */
	UCL("sizeof"), UCL("typeof"), UCL("asm"),
	/* Standard library */
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
	/* Common macros */
	UCL("true"), UCL("false"),
	NULL
};

kwtype __luaKeywords[] = {
	/* Keywords */
	UCL("function"), UCL("local"), UCL("return"), UCL("if"),
	UCL("then"), UCL("else"), UCL("elseif"), UCL("end"),
	UCL("for"), UCL("in"), UCL("do"), UCL("while"), UCL("repeat"),
	UCL("until"), UCL("break"), UCL("goto"),
	/* Values */
	UCL("true"), UCL("false"), UCL("nil"),
	/* Operators */
	UCL("and"), UCL("or"), UCL("not"),
	/* Standard library */
	UCL("print"), UCL("error"), UCL("assert"), UCL("pcall"),
	UCL("xpcall"), UCL("require"), UCL("dofile"), UCL("loadfile"),
	UCL("type"), UCL("tostring"), UCL("tonumber"), UCL("pairs"),
	UCL("ipairs"), UCL("next"), UCL("select"), UCL("unpack"),
	UCL("rawget"), UCL("rawset"), UCL("setmetatable"), UCL("getmetatable"),
	/* String library */
	UCL("string"), UCL("byte"), UCL("char"), UCL("find"),
	UCL("format"), UCL("gmatch"), UCL("gsub"), UCL("len"),
	UCL("lower"), UCL("match"), UCL("rep"), UCL("reverse"),
	UCL("sub"), UCL("upper"),
	/* Math library */
	UCL("math"), UCL("abs"), UCL("ceil"), UCL("floor"),
	UCL("max"), UCL("min"), UCL("sqrt"), UCL("sin"), UCL("cos"),
	UCL("tan"), UCL("exp"), UCL("log"), UCL("pi"),
	/* IO library */
	UCL("io"), UCL("open"), UCL("close"), UCL("read"),
	UCL("write"), UCL("lines"),
	/* Table library */
	UCL("table"), UCL("insert"), UCL("remove"), UCL("sort"), UCL("concat"),
	/* OS library */
	UCL("os"), UCL("execute"), UCL("exit"), UCL("clock"), UCL("date"),
	/* Coroutine library */
	UCL("coroutine"), UCL("create"), UCL("resume"), UCL("yield"), UCL("wrap"),
	NULL
};

kwtype __shellKeywords[] = {
	/* Control flow */
	UCL("if"), UCL("then"), UCL("else"), UCL("elif"), UCL("fi"),
	UCL("for"), UCL("do"), UCL("done"), UCL("while"), UCL("until"),
	UCL("case"), UCL("esac"), UCL("in"), UCL("break"), UCL("continue"),
	UCL("return"), UCL("exit"), UCL("test"),
	/* Common commands */
	UCL("echo"), UCL("printf"), UCL("read"), UCL("cd"), UCL("pwd"),
	UCL("ls"), UCL("cat"), UCL("cp"), UCL("mv"), UCL("rm"),
	UCL("mkdir"), UCL("rmdir"), UCL("chmod"), UCL("chown"),
	UCL("grep"), UCL("sed"), UCL("awk"), UCL("find"), UCL("sort"),
	UCL("uniq"), UCL("wc"), UCL("head"), UCL("tail"),
	UCL("tr"), UCL("cut"), UCL("paste"), UCL("join"),
	UCL("tar"), UCL("gzip"), UCL("gunzip"), UCL("bzip2"),
	UCL("chmod"), UCL("chown"), UCL("chgrp"),
	UCL("ps"), UCL("kill"), UCL("killall"), UCL("bg"), UCL("fg"),
	UCL("jobs"), UCL("wait"), UCL("sleep"),
	UCL("touch"), UCL("ln"), UCL("stat"), UCL("file"),
	UCL("which"), UCL("whereis"), UCL("man"), UCL("info"),
	UCL("date"), UCL("cal"), UCL("uptime"),
	UCL("env"), UCL("export"), UCL("set"), UCL("unset"),
	UCL("source"), UCL("alias"), UCL("unalias"),
	UCL("true"), UCL("false"), UCL("yes"),
	/* Variables */
	UCL("PATH"), UCL("HOME"), UCL("USER"), UCL("SHELL"),
	UCL("PWD"), UCL("OLDPWD"), UCL("TMPDIR"),
	UCL("LANG"), UCL("LC_ALL"), UCL("TERM"),
	/* Shell special variables */
	UCL("$?"), UCL("$#"), UCL("$$"), UCL("$!"), UCL("$@"),
	NULL
};

kwtype __cppKeywords[] = {
	/* Types */
	UCL("int"), UCL("long"), UCL("short"), UCL("char"), UCL("void"),
	UCL("float"), UCL("double"), UCL("unsigned"), UCL("signed"),
	UCL("bool"), UCL("auto"), UCL("wchar_t"), UCL("string"),
	UCL("size_t"), UCL("nullptr"), UCL("NULL"),
	/* Modifiers */
	UCL("const"), UCL("volatile"), UCL("static"), UCL("extern"),
	UCL("inline"), UCL("virtual"), UCL("override"), UCL("final"),
	UCL("explicit"), UCL("mutable"), UCL("constexpr"),
	/* Control flow */
	UCL("if"), UCL("else"), UCL("for"), UCL("while"), UCL("do"),
	UCL("switch"), UCL("case"), UCL("default"), UCL("break"),
	UCL("continue"), UCL("return"), UCL("goto"), UCL("co_return"),
	UCL("co_await"), UCL("co_yield"),
	/* Structures */
	UCL("struct"), UCL("class"), UCL("union"), UCL("enum"),
	UCL("typedef"), UCL("typename"), UCL("namespace"),
	UCL("using"), UCL("template"),
	/* OOP */
	UCL("new"), UCL("delete"), UCL("this"), UCL("operator"),
	UCL("friend"), UCL("public"), UCL("private"), UCL("protected"),
	/* Exceptions */
	UCL("try"), UCL("catch"), UCL("throw"), UCL("noexcept"),
	UCL("throws"),
	/* Concepts */
	UCL("concept"), UCL("requires"),
	/* Values */
	UCL("true"), UCL("false"),
	/* STL containers */
	UCL("vector"), UCL("list"), UCL("map"), UCL("set"),
	UCL("unordered_map"), UCL("unordered_set"),
	UCL("deque"), UCL("queue"), UCL("stack"), UCL("array"),
	/* Smart pointers */
	UCL("unique_ptr"), UCL("shared_ptr"), UCL("weak_ptr"),
	/* Streams */
	UCL("cin"), UCL("cout"), UCL("cerr"), UCL("endl"),
	UCL("ifstream"), UCL("ofstream"), UCL("fstream"),
	/* Standard library */
	UCL("std"), UCL("move"), UCL("forward"), UCL("swap"),
	UCL("make_pair"), UCL("make_tuple"),
	NULL
};

kwtype __rclangKeywords[] = {
	UCL("val"), UCL("sal"), UCL("s8"), UCL("u8"), UCL("s16"), UCL("u16"),
	UCL("s32"), UCL("u32"), UCL("s64"), UCL("u64"), UCL("for"), UCL("fn"),
	UCL("if"), UCL("else"), UCL("dcl"), UCL("ret"), UCL("break"),
	UCL("export"), UCL("szo"), UCL("ptr"),
	NULL
};

kwtype __golangKeywords[] = {
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

kwtype __elmKeywords[] = {
	UCL("module"), UCL("Cmd"), UCL("Sub"), UCL("List"), UCL("type"),
	UCL("alias"), UCL("case"), UCL("of"), UCL("import"), UCL("module"),
	UCL("exposing"), UCL("as"), UCL("String"), UCL("Int"), UCL("if"),
	UCL("then"), UCL("else"), UCL("Maybe"), UCL("Result"), UCL("Just"),
	UCL("Nothing"), UCL("True"), UCL("False"), UCL("Err"), UCL("Ok"),
	UCL("Bool"),
	NULL
};

kwtype __haskellKeywords[] = {
	UCL("module"), UCL("where"), UCL("let"), UCL("in"), UCL("import"),
	UCL("hiding"), UCL("qualified"), UCL("instance"), UCL("class"),
	UCL("case"), UCL("of"), UCL("if"), UCL("then"), UCL("else"), UCL("do"),
	UCL("type"), UCL("data"), UCL("newtype"),

	UCL("Applicative"), UCL("Bool"), UCL("Bounded"), UCL("Char"),
	UCL("Double"), UCL("Eq"), UCL("Either"), UCL("Enum"), UCL("Float"),
	UCL("Floating"), UCL("Foldable"), UCL("Fractional"), UCL("Functor"),
	UCL("IO"), UCL("Int"), UCL("Integer"), UCL("Integral"), UCL("Just"),
	UCL("Maybe"), UCL("Monad"), UCL("Num"), UCL("Ord"), UCL("Rational"),
	UCL("Read"), UCL("ReadS"), UCL("Real"), UCL("ReadFloat"),
	UCL("RealFrac"), UCL("Semigroup"), UCL("Show"), UCL("ShowS"),
	UCL("String"), UCL("Traversable"), UCL("Word"),
	NULL
};

kwtype __m4Keywords[] = {
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

kwtype __htmlKeywords[] = {
	/* HTML tags */
	UCL("html"), UCL("head"), UCL("body"), UCL("title"), UCL("meta"),
	UCL("link"), UCL("script"), UCL("style"), UCL("div"), UCL("span"),
	UCL("p"), UCL("br"), UCL("hr"), UCL("img"), UCL("a"),
	UCL("h1"), UCL("h2"), UCL("h3"), UCL("h4"), UCL("h5"), UCL("h6"),
	UCL("ul"), UCL("ol"), UCL("li"), UCL("table"), UCL("tr"),
	UCL("td"), UCL("th"), UCL("thead"), UCL("tbody"), UCL("tfoot"),
	UCL("form"), UCL("input"), UCL("button"), UCL("select"),
	UCL("option"), UCL("textarea"), UCL("label"),
	UCL("header"), UCL("footer"), UCL("nav"), UCL("main"),
	UCL("section"), UCL("article"), UCL("aside"),
	UCL("strong"), UCL("em"), UCL("b"), UCL("i"), UCL("u"),
	UCL("pre"), UCL("code"), UCL("blockquote"),
	UCL("video"), UCL("audio"), UCL("source"), UCL("canvas"),
	UCL("svg"), UCL("iframe"),
	/* Common attributes */
	UCL("class"), UCL("id"), UCL("href"), UCL("src"),
	UCL("alt"), UCL("title"), UCL("type"), UCL("name"),
	UCL("value"), UCL("placeholder"), UCL("disabled"),
	UCL("required"), UCL("checked"), UCL("selected"),
	UCL("style"), UCL("onclick"), UCL("onload"),
	NULL
};

kwtype __markdownKeywords[] = {
	/* HTML entities/names that commonly appear */
	UCL("nbsp"), UCL("amp"), UCL("lt"), UCL("gt"),
	NULL
};

/*
 *	K[] must be defined as an array, which contains (char*, kwtype*) pairs,
 *	representing the suffix of a type of file and keywords used in the
 *	type of file.
 */

Keyword_Class K[] = {
	{ ".c", __cKeywords },
	{ ".h", __cKeywords },
	{ ".lua", __luaKeywords },
	{ ".sh", __shellKeywords },
	{ ".cc", __cppKeywords },
	{ ".cpp", __cppKeywords },
	{ ".hpp", __cppKeywords },
	{ ".cxx", __cppKeywords },
	{ ".rcs", __rclangKeywords },
	{ ".go", __golangKeywords },
	{ ".elm", __elmKeywords },
	{ ".hs", __haskellKeywords },
	{ ".m4", __m4Keywords },
	{ ".ac", __m4Keywords },
	{ ".html", __htmlKeywords },
	{ ".htm", __htmlKeywords },
	{ ".md", __markdownKeywords },
	{ ".markdown", __markdownKeywords },
	{ NULL, NULL },
};
