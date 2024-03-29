typedef enum {
    LBRACE,
    RBRACE,
    LBRACKET,
    RBRACKET,
    LPAREN,
    RPAREN,
    DQUOTE,
    QUOTE,    

    TYPE_BYTE,
    TYPE_SHORT,
    TYPE_CHAR,
    TYPE_INT,
    TYPE_LONG,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_BOOLEAN,
    TYPE_REFERENCE,
    TYPE_VOID,
    TYPE_STRING,

    ID,
    IMPORT_DECL,
    TYPE_DECL,
    CLASS_DECL,
    INTERFACE_DECL,
    ENUM_DECL,
    ANNOTATION_TYPE_DECL,

    MODIFIER_ANNOTATION,
    MODIFIER_PUBLIC,
    MODIFIER_PROTECTED,
    MODIFIER_PRIVATE,
    MODIFIER_STATIC,
    MODIFIER_ABSTRACT,
    MODIFIER_FINAL,
    MODIFIER_NATIVE,
    MODIFIER_SYNCHRONIZED,
    MODIFIER_TRANSIENT,
    MODIFIER_VOLATILE,
    MODIFIER_STRICTFP,

    CLASS_BODY,
    MEMBER_DECL,
    METHOD_DECL,
    
    STATEMENT,
    STATEMENT_SWITCH,
    STATEMENT_WHILE,
    STATEMENT_DO_WHILE,
    STATEMENT_FOR,
    STATEMENT_BREAK,
    STATEMENT_CONTINUE,
    STATEMENT_IF,
    STATEMENT_ELSE,
    STATEMENT_IF_ELSE,
    STATEMENT_RETURN,
    STATEMENT_THROW,
    STATEMENT_TRY,
    STATEMENT_CATCH,
    SWITCH_LABEL,

    EXPRESSION,
    ASSIGNMENT_OP,
    INFIX_OP,
    PREFIX_OP,
    POSTFIX_OP,
    PRIMARY_OP,
    ENUM,

    TOKEN_EOF
} Token;