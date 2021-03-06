/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef ROOLOGGAMMA
#define ROOLOGGAMMA

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class RooLogGamma : public RooAbsPdf {
public:
  RooLogGamma() {} ; 
  RooLogGamma(const char *name, const char *title,
	      RooAbsReal& _x,
	      RooAbsReal& _nu,
	      RooAbsReal& _landa,
	      RooAbsReal& _alpha);
  RooLogGamma(const RooLogGamma& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new RooLogGamma(*this,newname); }
  inline virtual ~RooLogGamma() { }

protected:

  RooRealProxy x ;
  RooRealProxy nu ;
  RooRealProxy landa ;
  RooRealProxy alpha ;
  
  Double_t evaluate() const ;

private:

  ClassDef(RooLogGamma,1) // Your description goes here...
};
 
#endif
