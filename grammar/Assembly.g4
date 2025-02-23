grammar Assembly;

program: statement* EOF;

statement
    : (addStatement | subStatement)
    ;

addStatement
    : 'add' register ',' operand '\n'
    ;

subStatement
    : 'sub' register ',' operand '\n'
    ;

register
    : VALID_NAME
    ;

operand
    : (register | INT)
    ;

VALID_NAME : [a-zA-Z_] [a-zA-Z_0-9]*;
INT : '-'? [0-9]+;

WS: [ \t\r\n]+ -> skip;