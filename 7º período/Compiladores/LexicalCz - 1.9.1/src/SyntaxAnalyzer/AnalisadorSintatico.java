
//----------------------------------------------------
// The following code was generated by CUP v0.11a beta 20060608
// Sat Apr 29 18:08:32 BRT 2023
//----------------------------------------------------

package SyntaxAnalyzer;

import java_cup.runtime.*;
import java.util.*;
import java.io.*;

/** CUP v0.11a beta 20060608 generated parser.
  * @version Sat Apr 29 18:08:32 BRT 2023
  */
public class AnalisadorSintatico extends java_cup.runtime.lr_parser {

  /** Default constructor. */
  public AnalisadorSintatico() {super();}

  /** Constructor which sets the default scanner. */
  public AnalisadorSintatico(java_cup.runtime.Scanner s) {super(s);}

  /** Constructor which sets the default scanner. */
  public AnalisadorSintatico(java_cup.runtime.Scanner s, java_cup.runtime.SymbolFactory sf) {super(s,sf);}

  /** Production table. */
  protected static final short _production_table[][] = 
    unpackFromStrings(new String[] {
    "\000\024\000\002\002\004\000\002\002\007\000\002\003" +
    "\004\000\002\003\003\000\002\004\003\000\002\004\003" +
    "\000\002\004\003\000\002\005\006\000\002\006\003\000" +
    "\002\006\003\000\002\006\003\000\002\007\005\000\002" +
    "\010\003\000\002\010\003\000\002\011\007\000\002\012" +
    "\005\000\002\012\003\000\002\013\004\000\002\013\004" +
    "\000\002\013\003" });

  /** Access to production table. */
  public short[][] production_table() {return _production_table;}

  /** Parse-action table. */
  protected static final short[][] _action_table = 
    unpackFromStrings(new String[] {
    "\000\044\000\006\007\005\010\007\001\002\000\004\002" +
    "\046\001\002\000\012\004\ufff5\014\ufff5\015\ufff5\017\ufff5" +
    "\001\002\000\004\004\010\001\002\000\012\004\ufff4\014" +
    "\ufff4\015\ufff4\017\ufff4\001\002\000\004\005\011\001\002" +
    "\000\010\007\005\010\007\015\016\001\002\000\012\006" +
    "\ufffc\007\ufffc\010\ufffc\015\ufffc\001\002\000\012\006\ufffd" +
    "\007\ufffd\010\ufffd\015\ufffd\001\002\000\012\006\ufffe\007" +
    "\005\010\007\015\016\001\002\000\006\015\031\017\030" +
    "\001\002\000\004\012\022\001\002\000\012\006\ufffb\007" +
    "\ufffb\010\ufffb\015\ufffb\001\002\000\004\006\021\001\002" +
    "\000\004\002\000\001\002\000\010\013\026\014\023\015" +
    "\025\001\002\000\004\011\ufff8\001\002\000\004\011\027" +
    "\001\002\000\004\011\ufff9\001\002\000\004\011\ufff7\001" +
    "\002\000\012\006\ufffa\007\ufffa\010\ufffa\015\ufffa\001\002" +
    "\000\004\020\033\001\002\000\004\011\032\001\002\000" +
    "\012\006\ufff6\007\ufff6\010\ufff6\015\ufff6\001\002\000\010" +
    "\007\005\010\007\013\037\001\002\000\006\014\043\015" +
    "\044\001\002\000\006\021\ufff1\022\041\001\002\000\004" +
    "\021\040\001\002\000\006\021\uffee\022\uffee\001\002\000" +
    "\012\006\ufff3\007\ufff3\010\ufff3\015\ufff3\001\002\000\010" +
    "\007\005\010\007\013\037\001\002\000\004\021\ufff2\001" +
    "\002\000\006\021\uffef\022\uffef\001\002\000\006\021\ufff0" +
    "\022\ufff0\001\002\000\004\006\uffff\001\002\000\004\002" +
    "\001\001\002" });

  /** Access to parse-action table. */
  public short[][] action_table() {return _action_table;}

  /** <code>reduce_goto</code> table. */
  protected static final short[][] _reduce_table = 
    unpackFromStrings(new String[] {
    "\000\044\000\006\002\003\010\005\001\001\000\002\001" +
    "\001\000\002\001\001\000\002\001\001\000\002\001\001" +
    "\000\002\001\001\000\016\003\017\004\013\005\012\007" +
    "\011\010\014\011\016\001\001\000\002\001\001\000\002" +
    "\001\001\000\016\003\044\004\013\005\012\007\011\010" +
    "\014\011\016\001\001\000\002\001\001\000\002\001\001" +
    "\000\002\001\001\000\002\001\001\000\002\001\001\000" +
    "\004\006\023\001\001\000\002\001\001\000\002\001\001" +
    "\000\002\001\001\000\002\001\001\000\002\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\010" +
    "\010\033\012\035\013\034\001\001\000\002\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\002" +
    "\001\001\000\010\010\033\012\041\013\034\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\002" +
    "\001\001\000\002\001\001" });

  /** Access to <code>reduce_goto</code> table. */
  public short[][] reduce_table() {return _reduce_table;}

  /** Instance of action encapsulation class. */
  protected CUP$AnalisadorSintatico$actions action_obj;

  /** Action encapsulation object initializer. */
  protected void init_actions()
    {
      action_obj = new CUP$AnalisadorSintatico$actions(this);
    }

  /** Invoke a user supplied parse action. */
  public java_cup.runtime.Symbol do_action(
    int                        act_num,
    java_cup.runtime.lr_parser parser,
    java.util.Stack            stack,
    int                        top)
    throws java.lang.Exception
  {
    /* call code in generated class */
    return action_obj.CUP$AnalisadorSintatico$do_action(act_num, parser, stack, top);
  }

  /** Indicates start state. */
  public int start_state() {return 0;}
  /** Indicates start production. */
  public int start_production() {return 0;}

  /** <code>EOF</code> Symbol index. */
  public int EOF_sym() {return 0;}

  /** <code>error</code> Symbol index. */
  public int error_sym() {return 1;}


   
  public void report_error(String message, Object info)  { 
      System.out.println("AVISO - " + message);  
      System.out.println(info.toString());                
}
  public void report_fatal_error(String message, Object info)  {
        System.out.println("ERRO - " + message);         
        System.exit(-1);
    }               

}

/** Cup generated class to encapsulate user supplied action code.*/
class CUP$AnalisadorSintatico$actions {
  private final AnalisadorSintatico parser;

  /** Constructor */
  CUP$AnalisadorSintatico$actions(AnalisadorSintatico parser) {
    this.parser = parser;
  }

  /** Method with the actual generated action code. */
  public final java_cup.runtime.Symbol CUP$AnalisadorSintatico$do_action(
    int                        CUP$AnalisadorSintatico$act_num,
    java_cup.runtime.lr_parser CUP$AnalisadorSintatico$parser,
    java.util.Stack            CUP$AnalisadorSintatico$stack,
    int                        CUP$AnalisadorSintatico$top)
    throws java.lang.Exception
    {
      /* Symbol object for return from actions */
      java_cup.runtime.Symbol CUP$AnalisadorSintatico$result;

      /* select the action based on the action number */
      switch (CUP$AnalisadorSintatico$act_num)
        {
          /*. . . . . . . . . . . . . . . . . . . .*/
          case 19: // var_funcao ::= CONST_CHAR 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("var_funcao",9, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 18: // var_funcao ::= tipo_dado CONST_NUMBER 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("var_funcao",9, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-1)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 17: // var_funcao ::= tipo_dado VARIABLE_NAME 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("var_funcao",9, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-1)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 16: // vars_funcao ::= var_funcao 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("vars_funcao",8, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 15: // vars_funcao ::= var_funcao VGL vars_funcao 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("vars_funcao",8, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-2)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 14: // decl_funcao ::= tipo_dado FUNCTION_NAME ABRE_P vars_funcao FECHA_P 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("decl_funcao",7, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-4)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 13: // tipo_dado ::= TIPO_CHAR 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("tipo_dado",6, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 12: // tipo_dado ::= TIPO_INTEIRO 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("tipo_dado",6, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 11: // decl_variavel ::= tipo_dado VARIABLE_NAME PTVG 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("decl_variavel",5, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-2)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 10: // expr ::= CONST_CHAR 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("expr",4, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 9: // expr ::= CONST_NUMBER 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("expr",4, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 8: // expr ::= VARIABLE_NAME 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("expr",4, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 7: // decl_atrib ::= VARIABLE_NAME SIMBOLO_ATRIB expr PTVG 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("decl_atrib",3, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-3)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 6: // comando ::= decl_funcao 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("comando",2, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 5: // comando ::= decl_variavel 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("comando",2, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 4: // comando ::= decl_atrib 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("comando",2, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 3: // comandos ::= comando 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("comandos",1, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 2: // comandos ::= comando comandos 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("comandos",1, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-1)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 1: // program ::= tipo_dado PROGRAMA INICIO comandos FIM 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("program",0, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-4)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 0: // $START ::= program EOF 
            {
              Object RESULT =null;
		int start_valleft = ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-1)).left;
		int start_valright = ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-1)).right;
		Object start_val = (Object)((java_cup.runtime.Symbol) CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-1)).value;
		RESULT = start_val;
              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("$START",0, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-1)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          /* ACCEPT */
          CUP$AnalisadorSintatico$parser.done_parsing();
          return CUP$AnalisadorSintatico$result;

          /* . . . . . .*/
          default:
            throw new Exception(
               "Invalid action number found in internal parse table");

        }
    }
}

