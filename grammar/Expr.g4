grammar Expr;
expr: INT | expr ('+'|'-') expr;
INT: [0-9]+;
WS: [ \t\r\n]+ -> skip;