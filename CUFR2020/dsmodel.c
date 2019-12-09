#include <matrixop.h>
/* Declaration of C-structs */
/* Prototypes for functions used in model */
#include <ModelicaTables.c>
DYMOLA_STATIC RealArray    Claytex_Blocks_Tables_Functions_Internal_readMatrix_M
  (const char*  fileName0_0, const char*  tableName0_0, int  nRows0_0, int  
  nCols0_0, RealArray   defaultTable0_0, int  useDefault0_0);
/* Codes used in model */
DYMOLA_STATIC RealArray    Claytex_Blocks_Tables_Functions_Internal_readMatrix_M
  (const char*  fileName0_0, const char*  tableName0_0, int  nRows0_0, int  
  nCols0_0, RealArray   defaultTable0_0, int  useDefault0_0) {
  PushContext("Claytex.Blocks.Tables.Functions.Internal.readMatrix")
  AssertModelica(DYNSizeSimple(defaultTable0_0,1)==nRows0_0,"size(defaultTable, 1) == nRows","Dimension check of input to function failed");
  AssertModelica(DYNSizeSimple(defaultTable0_0,2)==nCols0_0,"size(defaultTable, 2) == nCols","Dimension check of input to function failed");
  {
    /* Declare outputs and temporaries */
    RealArray    table0_0;
    MarkObject retmark_ = PushMark();
    table0_0=RealTemporary( 2, nRows0_0, nCols0_0);
    RePushMark(&retmark_);
    RealFillAssign( table0_0, 0);
    /* Start of real code */
    {
      (Claytex_ReadMatrix)(fileName0_0, tableName0_0, nRows0_0, nCols0_0, 
        defaultTable0_0.data, useDefault0_0, table0_0.data);
      }
    /* Output section */
    PopMark(retmark_);
    PopContext()
    return table0_0;
  }}
/* DSblock C-code: */

#include <moutil.c>
#if !defined(DYM2CCUR)
 DYMOLA_STATIC const char*modelName="Claytex.Blocks.Tables.Functions.Internal.readMatrix";
#endif
DYMOLA_STATIC const char*usedLibraries[]={0};
DYMOLA_STATIC const char*dllLibraryPath[]={0};
DYMOLA_STATIC const char*default_dymosim_license_filename=
 "c:/users/fsaewatercooled/appdata/roaming/dassaultsystemes/dymola/dymola.lic";
#define NX_    0
#define NX2_   0
#define NU_    0
#define NY_    0
#define NW_    0
#define NP_    0
#define NPS_   0
#define ND_   0
#define NXP_   0
#define NInitial_   0
#define MAXAuxStr_   0
#define MAXAuxStrLen_   500
#define NHash1_ 0
#define NHash2_ 0
#define NHash3_ 0
#define NI_    0
#define NRelF_ 0
#define NRel_  0
#define NTim_  0
#define NSamp_ 0
#define NCons_ 0
#define NA_    0
#define SizePre_ 0
#define SizeEq_ 0
#define SizeDelay_ 0
#define QNLmax_ 0
#define MAXAux 0
#define NrDymolaTimers_ 0
#define NWhen_ 0
#define NCheckIf_ 0
#define NGlobalHelp_ 0
#define NGlobalHelpI_ 0
#ifndef NExternalObject_
#define NExternalObject_ 0
#endif
#include <dsblock1.c>

const char*   fileName0_0;
const char*   tableName0_0;
int   nRows0_0;
int   nCols0_0;
RealArray    defaultTable0_0;
int   useDefault0_0;
fileName0_0 = StringReadScalar ( "funcin.mat" , "fileName");
tableName0_0 = StringReadScalar ( "funcin.mat" , "tableName");
nRows0_0 = IntegerReadScalar ( "funcin.mat" , "nRows");
nCols0_0 = IntegerReadScalar ( "funcin.mat" , "nCols");
defaultTable0_0 = RealFakeTranspose2( RealReadArray ( "funcin.mat" , 
  "defaultTable" , 2));
useDefault0_0 = IntegerReadScalar ( "funcin.mat" , "useDefault");

{
RealArray    table0_0 = Claytex_Blocks_Tables_Functions_Internal_readMatrix_M(
  fileName0_0, tableName0_0, nRows0_0, nCols0_0, defaultTable0_0, useDefault0_0);
writeArrays("funcout.mat" , 1, "table", doubleMatrix , 2, RealFakeTranspose1( 
  table0_0));

}
{ FILE*f=fopen("status.","w");if (f) fprintf(f,"Finished\n");fclose(f);}
{ FILE*f=fopen("success.","w");fclose(f);}
exit(0);

#include <dsblock6.c>

#include <dsblock5.c>

StartDataBlock
EndDataBlock
