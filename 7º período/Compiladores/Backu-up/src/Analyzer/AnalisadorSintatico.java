
//----------------------------------------------------
// The following code was generated by CUP v0.11a beta 20060608
// Sat Apr 29 18:29:56 BRT 2023
//----------------------------------------------------

package Analyzer;

import java_cup.runtime.*;
import java.util.*;
import java.io.*;

/** CUP v0.11a beta 20060608 generated parser.
  * @version Sat Apr 29 18:29:56 BRT 2023
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
    "\000\025\000\002\002\004\000\002\002\006\000\002\003" +
    "\004\000\002\003\003\000\002\004\003\000\002\004\003" +
    "\000\002\004\003\000\002\005\006\000\002\006\003\000" +
    "\002\006\003\000\002\006\003\000\002\007\005\000\002" +
    "\010\003\000\002\010\003\000\002\011\007\000\002\012" +
    "\004\000\002\012\003\000\002\013\004\000\002\013\003" +
    "\000\002\013\004\000\002\013\003" });

  /** Access to production table. */
  public short[][] production_table() {return _production_table;}

  /** Parse-action table. */
  protected static final short[][] _action_table = 
    unpackFromStrings(new String[] {
    "\000\043\000\004\004\005\001\002\000\004\002\045\001" +
    "\002\000\004\005\006\001\002\000\010\007\013\010\014" +
    "\017\015\001\002\000\012\006\ufffc\007\ufffc\010\ufffc\017" +
    "\ufffc\001\002\000\012\006\ufffd\007\ufffd\010\ufffd\017\ufffd" +
    "\001\002\000\012\006\ufffe\007\013\010\014\017\015\001" +
    "\002\000\006\016\027\017\030\001\002\000\010\014\ufff5" +
    "\016\ufff5\017\ufff5\001\002\000\010\014\ufff4\016\ufff4\017" +
    "\ufff4\001\002\000\004\012\021\001\002\000\012\006\ufffb" +
    "\007\ufffb\010\ufffb\017\ufffb\001\002\000\004\006\020\001" +
    "\002\000\004\002\000\001\002\000\010\013\023\014\025" +
    "\017\024\001\002\000\004\011\026\001\002\000\004\011" +
    "\ufff7\001\002\000\004\011\ufff9\001\002\000\004\011\ufff8" +
    "\001\002\000\012\006\ufffa\007\ufffa\010\ufffa\017\ufffa\001" +
    "\002\000\004\020\032\001\002\000\004\011\031\001\002" +
    "\000\012\006\ufff6\007\ufff6\010\ufff6\017\ufff6\001\002\000" +
    "\012\007\013\010\014\013\037\022\036\001\002\000\014" +
    "\007\013\010\014\013\037\021\ufff1\022\036\001\002\000" +
    "\006\014\042\017\041\001\002\000\004\021\040\001\002" +
    "\000\014\007\uffef\010\uffef\013\uffef\021\uffef\022\uffef\001" +
    "\002\000\014\007\uffed\010\uffed\013\uffed\021\uffed\022\uffed" +
    "\001\002\000\012\006\ufff3\007\ufff3\010\ufff3\017\ufff3\001" +
    "\002\000\014\007\ufff0\010\ufff0\013\ufff0\021\ufff0\022\ufff0" +
    "\001\002\000\014\007\uffee\010\uffee\013\uffee\021\uffee\022" +
    "\uffee\001\002\000\004\021\ufff2\001\002\000\004\006\uffff" +
    "\001\002\000\004\002\001\001\002" });

  /** Access to parse-action table. */
  public short[][] action_table() {return _action_table;}

  /** <code>reduce_goto</code> table. */
  protected static final short[][] _reduce_table = 
    unpackFromStrings(new String[] {
    "\000\043\000\004\002\003\001\001\000\002\001\001\000" +
    "\002\001\001\000\016\003\016\004\010\005\007\007\006" +
    "\010\011\011\015\001\001\000\002\001\001\000\002\001" +
    "\001\000\016\003\043\004\010\005\007\007\006\010\011" +
    "\011\015\001\001\000\002\001\001\000\002\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\002" +
    "\001\001\000\002\001\001\000\004\006\021\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\002" +
    "\001\001\000\002\001\001\000\002\001\001\000\002\001" +
    "\001\000\002\001\001\000\010\010\033\012\034\013\032" +
    "\001\001\000\010\010\033\012\042\013\032\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\002" +
    "\001\001\000\002\001\001\000\002\001\001\000\002\001" +
    "\001\000\002\001\001\000\002\001\001\000\002\001\001" +
    "" });

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
          case 20: // var_funcao ::= CHAR 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("var_funcao",9, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 19: // var_funcao ::= tipo_dado INTEIRO 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("var_funcao",9, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-1)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 18: // var_funcao ::= VGL 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("var_funcao",9, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
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
          case 15: // vars_funcao ::= var_funcao vars_funcao 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("vars_funcao",8, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-1)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
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
          case 10: // expr ::= CHAR 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("expr",4, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
            }
          return CUP$AnalisadorSintatico$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 9: // expr ::= INTEIRO 
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
          case 1: // program ::= PROGRAMA INICIO comandos FIM 
            {
              Object RESULT =null;

              CUP$AnalisadorSintatico$result = parser.getSymbolFactory().newSymbol("program",0, ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.elementAt(CUP$AnalisadorSintatico$top-3)), ((java_cup.runtime.Symbol)CUP$AnalisadorSintatico$stack.peek()), RESULT);
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

