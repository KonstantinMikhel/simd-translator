grammar Assembly;

program: statement* EOF;

statement
    : (addStatement | subStatement | cmpStatement | jzStatement)
    ;

addStatement
    : 'add' register ',' operand '\n'
    ;

subStatement
    : 'sub' register ',' operand '\n'
    ;

cmpStatement
    : 'cmp' register ',' operand '\n'
    ;

jzStatement
    : 'jz' label '\n'
    ;

register
    : VALID_NAME
    ;

operand
    : (register | INT)
    ;

label
    : VALID_NAME
    ;

VALID_NAME : [a-zA-Z_] [a-zA-Z_0-9]*;
INT : '-'? [0-9]+;

WS: [ \t\r\n]+ -> skip;