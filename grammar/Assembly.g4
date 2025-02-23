grammar Assembly;

program: statement* EOF;

statement
    : 'add' REGISTER ',' (REGISTER | INT) '\n' # addStatement
    | 'sub' REGISTER ',' (REGISTER | INT) '\n' # subStatement  
    ;

REGISTER : [a-zA-Z_] [a-zA-Z_0-9]*;
INT : '-'? [0-9]+;

WS: [ \t\r\n]+ -> skip;