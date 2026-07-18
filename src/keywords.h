/*
 *	Keywords list for ucvim
 *	This file is in the public domain.
 */

kwtype __cKeywords[] = {
	UCL("int"), UCL("long"), UCL("short"), UCL("union"), UCL("struct"),
	UCL("typedef"), UCL("if"), UCL("for"), UCL("do"), UCL("while"),
	UCL("void"), UCL("auto"), UCL("static"), UCL("bool"), UCL("_Bool"),
	UCL("case"), UCL("break"), UCL("continue"), UCL("extern"), UCL("char"),
	UCL("wchar_t"), UCL("float"), UCL("double"), UCL("return"),
	UCL("default"), UCL("goto"), UCL("inline"), UCL("enum"), UCL("const"),
	UCL("else"), UCL("NULL"), UCL("unsigned"), UCL("register"), UCL("asm"),
	UCL("volatile"), UCL("u8"), UCL("s8"), UCL("u16"), UCL("s16"),
	UCL("u32"), UCL("s32"), UCL("u64"), UCL("s64"), UCL("switch"),
	NULL
};

kwtype __luaKeywords[] = {
	UCL("function"), UCL("local"), UCL("for"), UCL("in"), UCL("return"),
	UCL("if"), UCL("else"), UCL("elseif"), UCL("do"), UCL("end"),
	UCL("then"), UCL("break"), UCL("goto"), UCL("while"), UCL("true"),
	UCL("false"), UCL("and"), UCL("or"), UCL("not"), UCL("nil"),
	NULL
};

kwtype __shellKeywords[] = {
	UCL("if"), UCL("then"), UCL("fi"), UCL("exit"), UCL("case"),
	UCL("break"), UCL("test"), UCL("for"), UCL("do"), UCL("done"),
	UCL("in"), UCL("while"), UCL("return"), UCL("elif"), UCL("else"),
	UCL("esac"),
	NULL
};

kwtype __cppKeywords[] = {
	UCL("int"), UCL("long"), UCL("short"), UCL("union"), UCL("struct"),
	UCL("typedef"), UCL("if"), UCL("for"), UCL("do"), UCL("while"),
	UCL("void"), UCL("auto"), UCL("static"), UCL("bool"), UCL("class"),
	UCL("case"), UCL("break"), UCL("continue"), UCL("extern"), UCL("char"),
	UCL("wchar_t"), UCL("float"), UCL("double"), UCL("return"),
	UCL("default"), UCL("goto"), UCL("inline"), UCL("enum"), UCL("const"),
	UCL("else"), UCL("NULL"), UCL("unsigned"), UCL("template"),
	UCL("namespace"), UCL("throw"), UCL("noexcept"), UCL("new"),
	UCL("delete"), UCL("class"), UCL("operator"), UCL("try"), UCL("false"),
	UCL("true"),
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
	UCL("error"),
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
	{ ".cc", __cppKeywords },
	{ ".cxx", __cppKeywords },
	{ ".rcs", __rclangKeywords },
	{ ".go", __golangKeywords },
	{ ".elm", __elmKeywords },
	{ ".hs", __haskellKeywords },
	{ ".m4", __m4Keywords },
	{ ".ac", __m4Keywords },
	{ NULL, NULL },
};
