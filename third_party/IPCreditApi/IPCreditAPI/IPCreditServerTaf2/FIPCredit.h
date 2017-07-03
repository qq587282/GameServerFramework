// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.5.0 by WSRD Tencent.
// Generated from `FIPCredit.jce'
// **********************************************************************

#ifndef __FIPCREDIT_H_
#define __FIPCREDIT_H_

#include <map>
#include <string>
#include <vector>
#include "jce/Jce.h"
using namespace std;
#include "IPCredit.h"
#include "servant/ServantProxy.h"
#include "servant/Servant.h"


namespace newIPPro
{

    /* callback of async proxy for client */
    class FIPCreditPrxCallback: public taf::ServantProxyCallback
    {
    public:
        virtual ~FIPCreditPrxCallback(){}
        virtual void callback_FirstTotalDownloadIPInfo( const newIPPro::downloadInfo& loadInfo)
        { throw std::runtime_error("callback_FirstTotalDownloadIPInfo() overloading incorrect."); }
        virtual void callback_FirstTotalDownloadIPInfo_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_FirstTotalDownloadIPInfo_exception() overloading incorrect."); }

        virtual void callback_FirstTotalDownloadCode( const vector<newIPPro::CodeInfo>& vCodeInfo)
        { throw std::runtime_error("callback_FirstTotalDownloadCode() overloading incorrect."); }
        virtual void callback_FirstTotalDownloadCode_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_FirstTotalDownloadCode_exception() overloading incorrect."); }

    public:
        int onDispatch(taf::ReqMessagePtr msg);
    };
    typedef taf::TC_AutoPtr<FIPCreditPrxCallback> FIPCreditPrxCallbackPtr;

    /* proxy for client */
    class FIPCreditProxy : public taf::ServantProxy
    {
    public:
        typedef map<string, string> TAF_CONTEXT;
        void FirstTotalDownloadIPInfo(taf::UInt32 StartPos,taf::UInt32 StartPos1,taf::UInt32 chunkLen,newIPPro::downloadInfo &loadInfo,const map<string, string> &context = TAF_CONTEXT());
        void async_FirstTotalDownloadIPInfo(FIPCreditPrxCallbackPtr callback,taf::UInt32 StartPos,taf::UInt32 StartPos1,taf::UInt32 chunkLen,const map<string, string> &context = TAF_CONTEXT());

        void FirstTotalDownloadCode(vector<newIPPro::CodeInfo> &vCodeInfo,const map<string, string> &context = TAF_CONTEXT());
        void async_FirstTotalDownloadCode(FIPCreditPrxCallbackPtr callback,const map<string, string> &context = TAF_CONTEXT());

        FIPCreditProxy* taf_hash(int64_t key);
    };
    typedef taf::TC_AutoPtr<FIPCreditProxy> FIPCreditPrx;

    /* servant for server */
    class FIPCredit : public taf::Servant
    {
    public:
        virtual ~FIPCredit(){}
        virtual void FirstTotalDownloadIPInfo(taf::UInt32 StartPos,taf::UInt32 StartPos1,taf::UInt32 chunkLen,newIPPro::downloadInfo &loadInfo,taf::JceCurrentPtr current) = 0;
        static void async_response_FirstTotalDownloadIPInfo(taf::JceCurrentPtr current, const newIPPro::downloadInfo &loadInfo);

        virtual void FirstTotalDownloadCode(vector<newIPPro::CodeInfo> &vCodeInfo,taf::JceCurrentPtr current) = 0;
        static void async_response_FirstTotalDownloadCode(taf::JceCurrentPtr current, const vector<newIPPro::CodeInfo> &vCodeInfo);

    public:
        int onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer);
    };


}



#endif
