// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.5.0 by WSRD Tencent.
// Generated from `IPCredit.jce'
// **********************************************************************

#ifndef __IPCREDIT_H_
#define __IPCREDIT_H_

#include <map>
#include <string>
#include <vector>
#include "jce/Jce.h"
using namespace std;
#include "servant/ServantProxy.h"
#include "servant/Servant.h"


namespace newIPPro
{
    enum ReportType
    {
        ECountry,
        EProvince,
        ECity,
        EOperator,
    };
    inline string etos(const ReportType & e)
    {
        switch(e)
        {
            case ECountry: return "ECountry";
            case EProvince: return "EProvince";
            case ECity: return "ECity";
            case EOperator: return "EOperator";
            default: return "";
        }
    }
    inline int stoe(const string & s, ReportType & e)
    {
        if(s == "ECountry")  { e=ECountry; return 0;}
        if(s == "EProvince")  { e=EProvince; return 0;}
        if(s == "ECity")  { e=ECity; return 0;}
        if(s == "EOperator")  { e=EOperator; return 0;}

        return -1;
    }

    struct IPInfo : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "newIPPro.IPInfo";
        }
        static string MD5()
        {
            return "3e6b9203bd0347db5b70e74e05dcacb7";
        }
        IPInfo()
        :country(0),province(0),city(0),district(0),extend(0),oper(0),nettype(0),apn(0),flable(0)
        {
        }
        void resetDefautlt()
        {
            country = 0;
            province = 0;
            city = 0;
            district = 0;
            extend = 0;
            oper = 0;
            nettype = 0;
            apn = 0;
            flable = 0;
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(country, 0);
            _os.write(province, 1);
            _os.write(city, 2);
            _os.write(district, 3);
            _os.write(extend, 4);
            _os.write(oper, 5);
            _os.write(nettype, 6);
            _os.write(apn, 7);
            _os.write(flable, 8);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(country, 0, true);
            _is.read(province, 1, true);
            _is.read(city, 2, true);
            _is.read(district, 3, true);
            _is.read(extend, 4, true);
            _is.read(oper, 5, true);
            _is.read(nettype, 6, true);
            _is.read(apn, 7, true);
            _is.read(flable, 8, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(country,"country");
            _ds.display(province,"province");
            _ds.display(city,"city");
            _ds.display(district,"district");
            _ds.display(extend,"extend");
            _ds.display(oper,"oper");
            _ds.display(nettype,"nettype");
            _ds.display(apn,"apn");
            _ds.display(flable,"flable");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(country, true);
            _ds.displaySimple(province, true);
            _ds.displaySimple(city, true);
            _ds.displaySimple(district, true);
            _ds.displaySimple(extend, true);
            _ds.displaySimple(oper, true);
            _ds.displaySimple(nettype, true);
            _ds.displaySimple(apn, true);
            _ds.displaySimple(flable, false);
            return _os;
        }
    public:
        taf::UInt32 country;
        taf::UInt32 province;
        taf::UInt32 city;
        taf::Int64 district;
        taf::UInt32 extend;
        taf::UInt32 oper;
        taf::UInt32 nettype;
        taf::UInt32 apn;
        taf::UInt32 flable;
    };
    inline bool operator==(const IPInfo&l, const IPInfo&r)
    {
        return l.country == r.country && l.province == r.province && l.city == r.city && l.district == r.district && l.extend == r.extend && l.oper == r.oper && l.nettype == r.nettype && l.apn == r.apn && l.flable == r.flable;
    }
    inline bool operator!=(const IPInfo&l, const IPInfo&r)
    {
        return !(l == r);
    }

    struct IPAttribute : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "newIPPro.IPAttribute";
        }
        static string MD5()
        {
            return "5e0e0212b68acfa86c62b30a51323077";
        }
        IPAttribute()
        :startIP(0),endIP(0),place(0),extend(0),oper(0),nettype(0),apn(0),flable(0)
        {
        }
        void resetDefautlt()
        {
            startIP = 0;
            endIP = 0;
            place = 0;
            extend = 0;
            oper = 0;
            nettype = 0;
            apn = 0;
            flable = 0;
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(startIP, 0);
            _os.write(endIP, 1);
            _os.write(place, 2);
            _os.write(extend, 3);
            _os.write(oper, 4);
            _os.write(nettype, 5);
            _os.write(apn, 6);
            _os.write(flable, 7);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(startIP, 0, true);
            _is.read(endIP, 1, true);
            _is.read(place, 2, true);
            _is.read(extend, 3, true);
            _is.read(oper, 4, true);
            _is.read(nettype, 5, true);
            _is.read(apn, 6, true);
            _is.read(flable, 7, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(startIP,"startIP");
            _ds.display(endIP,"endIP");
            _ds.display(place,"place");
            _ds.display(extend,"extend");
            _ds.display(oper,"oper");
            _ds.display(nettype,"nettype");
            _ds.display(apn,"apn");
            _ds.display(flable,"flable");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(startIP, true);
            _ds.displaySimple(endIP, true);
            _ds.displaySimple(place, true);
            _ds.displaySimple(extend, true);
            _ds.displaySimple(oper, true);
            _ds.displaySimple(nettype, true);
            _ds.displaySimple(apn, true);
            _ds.displaySimple(flable, false);
            return _os;
        }
    public:
        taf::UInt32 startIP;
        taf::UInt32 endIP;
        taf::Int64 place;
        taf::UInt32 extend;
        taf::UInt32 oper;
        taf::UInt32 nettype;
        taf::UInt32 apn;
        taf::UInt32 flable;
    };
    inline bool operator==(const IPAttribute&l, const IPAttribute&r)
    {
        return l.startIP == r.startIP && l.endIP == r.endIP && l.place == r.place && l.extend == r.extend && l.oper == r.oper && l.nettype == r.nettype && l.apn == r.apn && l.flable == r.flable;
    }
    inline bool operator!=(const IPAttribute&l, const IPAttribute&r)
    {
        return !(l == r);
    }
    inline bool operator<(const IPAttribute&l, const IPAttribute&r)
    {
        if(l.startIP != r.startIP)  return (l.startIP < r.startIP);
        if(l.endIP != r.endIP)  return (l.endIP < r.endIP);
        if(l.place != r.place)  return (l.place < r.place);
        if(l.extend != r.extend)  return (l.extend < r.extend);
        if(l.oper != r.oper)  return (l.oper < r.oper);
        if(l.nettype != r.nettype)  return (l.nettype < r.nettype);
        if(l.apn != r.apn)  return (l.apn < r.apn);
        if(l.flable != r.flable)  return (l.flable < r.flable);
        return false;
    }
    inline bool operator<=(const IPAttribute&l, const IPAttribute&r)
    {
        return !(r < l);
    }
    inline bool operator>(const IPAttribute&l, const IPAttribute&r)
    {
        return r < l;
    }
    inline bool operator>=(const IPAttribute&l, const IPAttribute&r)
    {
        return !(l < r);
    }

    struct IPProperty : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "newIPPro.IPProperty";
        }
        static string MD5()
        {
            return "b9b2c4bf65a44fc8c165af0c6b65ca9c";
        }
        IPProperty()
        :timesTamp(0),sequence(0),startIP(0),endIP(0),place(0),extend(0),oper(0),nettype(0),apn(0),flable(0)
        {
        }
        void resetDefautlt()
        {
            timesTamp = 0;
            sequence = 0;
            startIP = 0;
            endIP = 0;
            place = 0;
            extend = 0;
            oper = 0;
            nettype = 0;
            apn = 0;
            flable = 0;
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(timesTamp, 0);
            _os.write(sequence, 1);
            _os.write(startIP, 2);
            _os.write(endIP, 3);
            _os.write(place, 4);
            _os.write(extend, 5);
            _os.write(oper, 6);
            _os.write(nettype, 7);
            _os.write(apn, 8);
            _os.write(flable, 9);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(timesTamp, 0, true);
            _is.read(sequence, 1, true);
            _is.read(startIP, 2, true);
            _is.read(endIP, 3, true);
            _is.read(place, 4, true);
            _is.read(extend, 5, true);
            _is.read(oper, 6, true);
            _is.read(nettype, 7, true);
            _is.read(apn, 8, true);
            _is.read(flable, 9, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(timesTamp,"timesTamp");
            _ds.display(sequence,"sequence");
            _ds.display(startIP,"startIP");
            _ds.display(endIP,"endIP");
            _ds.display(place,"place");
            _ds.display(extend,"extend");
            _ds.display(oper,"oper");
            _ds.display(nettype,"nettype");
            _ds.display(apn,"apn");
            _ds.display(flable,"flable");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(timesTamp, true);
            _ds.displaySimple(sequence, true);
            _ds.displaySimple(startIP, true);
            _ds.displaySimple(endIP, true);
            _ds.displaySimple(place, true);
            _ds.displaySimple(extend, true);
            _ds.displaySimple(oper, true);
            _ds.displaySimple(nettype, true);
            _ds.displaySimple(apn, true);
            _ds.displaySimple(flable, false);
            return _os;
        }
    public:
        taf::UInt32 timesTamp;
        taf::UInt32 sequence;
        taf::UInt32 startIP;
        taf::UInt32 endIP;
        taf::Int64 place;
        taf::UInt32 extend;
        taf::UInt32 oper;
        taf::UInt32 nettype;
        taf::UInt32 apn;
        taf::UInt32 flable;
    };
    inline bool operator==(const IPProperty&l, const IPProperty&r)
    {
        return l.timesTamp == r.timesTamp && l.sequence == r.sequence && l.startIP == r.startIP && l.endIP == r.endIP && l.place == r.place && l.extend == r.extend && l.oper == r.oper && l.nettype == r.nettype && l.apn == r.apn && l.flable == r.flable;
    }
    inline bool operator!=(const IPProperty&l, const IPProperty&r)
    {
        return !(l == r);
    }
    inline bool operator<(const IPProperty&l, const IPProperty&r)
    {
        if(l.startIP != r.startIP)  return (l.startIP < r.startIP);
        if(l.endIP != r.endIP)  return (l.endIP < r.endIP);
        if(l.place != r.place)  return (l.place < r.place);
        if(l.extend != r.extend)  return (l.extend < r.extend);
        if(l.oper != r.oper)  return (l.oper < r.oper);
        if(l.nettype != r.nettype)  return (l.nettype < r.nettype);
        if(l.apn != r.apn)  return (l.apn < r.apn);
        if(l.flable != r.flable)  return (l.flable < r.flable);
        return false;
    }
    inline bool operator<=(const IPProperty&l, const IPProperty&r)
    {
        return !(r < l);
    }
    inline bool operator>(const IPProperty&l, const IPProperty&r)
    {
        return r < l;
    }
    inline bool operator>=(const IPProperty&l, const IPProperty&r)
    {
        return !(l < r);
    }

    struct downloadInfo : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "newIPPro.downloadInfo";
        }
        static string MD5()
        {
            return "004efe924ffda4ad1ca7f5d052988b15";
        }
        downloadInfo()
        :highMaxIndex(0),lowMaxIndex(0),isdownloadReset(0)
        {
        }
        void resetDefautlt()
        {
            highMaxIndex = 0;
            lowMaxIndex = 0;
            isdownloadReset = 0;
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(highMaxIndex, 0);
            _os.write(lowMaxIndex, 1);
            _os.write(isdownloadReset, 2);
            _os.write(IPContent, 3);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(highMaxIndex, 0, true);
            _is.read(lowMaxIndex, 1, true);
            _is.read(isdownloadReset, 2, true);
            _is.read(IPContent, 3, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(highMaxIndex,"highMaxIndex");
            _ds.display(lowMaxIndex,"lowMaxIndex");
            _ds.display(isdownloadReset,"isdownloadReset");
            _ds.display(IPContent,"IPContent");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(highMaxIndex, true);
            _ds.displaySimple(lowMaxIndex, true);
            _ds.displaySimple(isdownloadReset, true);
            _ds.displaySimple(IPContent, false);
            return _os;
        }
    public:
        taf::UInt32 highMaxIndex;
        taf::UInt32 lowMaxIndex;
        taf::Char isdownloadReset;
        vector<newIPPro::IPProperty> IPContent;
    };
    inline bool operator==(const downloadInfo&l, const downloadInfo&r)
    {
        return l.highMaxIndex == r.highMaxIndex && l.lowMaxIndex == r.lowMaxIndex && l.isdownloadReset == r.isdownloadReset && l.IPContent == r.IPContent;
    }
    inline bool operator!=(const downloadInfo&l, const downloadInfo&r)
    {
        return !(l == r);
    }

    struct CodeInfo : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "newIPPro.CodeInfo";
        }
        static string MD5()
        {
            return "fcbebef4f26b85424d14d8a87ad46ffa";
        }
        CodeInfo()
        :codeType(0),ID(0),content("")
        {
        }
        void resetDefautlt()
        {
            codeType = 0;
            ID = 0;
            content = "";
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(codeType, 0);
            _os.write(ID, 1);
            _os.write(content, 2);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(codeType, 0, true);
            _is.read(ID, 1, true);
            _is.read(content, 2, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(codeType,"codeType");
            _ds.display(ID,"ID");
            _ds.display(content,"content");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(codeType, true);
            _ds.displaySimple(ID, true);
            _ds.displaySimple(content, false);
            return _os;
        }
    public:
        taf::Int32 codeType;
        taf::Int64 ID;
        std::string content;
    };
    inline bool operator==(const CodeInfo&l, const CodeInfo&r)
    {
        return l.codeType == r.codeType && l.ID == r.ID && l.content == r.content;
    }
    inline bool operator!=(const CodeInfo&l, const CodeInfo&r)
    {
        return !(l == r);
    }
    inline bool operator<(const CodeInfo&l, const CodeInfo&r)
    {
        if(l.codeType != r.codeType)  return (l.codeType < r.codeType);
        if(l.ID != r.ID)  return (l.ID < r.ID);
        if(l.content != r.content)  return (l.content < r.content);
        return false;
    }
    inline bool operator<=(const CodeInfo&l, const CodeInfo&r)
    {
        return !(r < l);
    }
    inline bool operator>(const CodeInfo&l, const CodeInfo&r)
    {
        return r < l;
    }
    inline bool operator>=(const CodeInfo&l, const CodeInfo&r)
    {
        return !(l < r);
    }

    struct CheckInfo : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "newIPPro.CheckInfo";
        }
        static string MD5()
        {
            return "788c2b09b2184e01432170c253eaf982";
        }
        CheckInfo()
        :isNetFlow(0),isReset(0),updateConf(false)
        {
        }
        void resetDefautlt()
        {
            isNetFlow = 0;
            isReset = 0;
            updateConf = false;
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(isNetFlow, 0);
            _os.write(isReset, 1);
            _os.write(updateConf, 2);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(isNetFlow, 0, true);
            _is.read(isReset, 1, true);
            _is.read(updateConf, 2, false);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(isNetFlow,"isNetFlow");
            _ds.display(isReset,"isReset");
            _ds.display(updateConf,"updateConf");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(isNetFlow, true);
            _ds.displaySimple(isReset, true);
            _ds.displaySimple(updateConf, false);
            return _os;
        }
    public:
        taf::Char isNetFlow;
        taf::Char isReset;
        taf::Bool updateConf;
    };
    inline bool operator==(const CheckInfo&l, const CheckInfo&r)
    {
        return l.isNetFlow == r.isNetFlow && l.isReset == r.isReset && l.updateConf == r.updateConf;
    }
    inline bool operator!=(const CheckInfo&l, const CheckInfo&r)
    {
        return !(l == r);
    }

    struct ClientConf : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "newIPPro.ClientConf";
        }
        static string MD5()
        {
            return "1347c8cd98cb3b649de287c88af1dfae";
        }
        ClientConf()
        :statisOpen(false),simplingRate(0),logBufferLimit(1000),logUnknownIp(false),confVersion(1)
        {
        }
        void resetDefautlt()
        {
            statisOpen = false;
            simplingRate = 0;
            logBufferLimit = 1000;
            logUnknownIp = false;
            confVersion = 1;
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(statisOpen, 0);
            _os.write(simpleLogCitys, 1);
            _os.write(simplingRate, 2);
            _os.write(logBufferLimit, 3);
            _os.write(logUnknownIp, 4);
            _os.write(confVersion, 5);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(statisOpen, 0, true);
            _is.read(simpleLogCitys, 1, true);
            _is.read(simplingRate, 2, true);
            _is.read(logBufferLimit, 3, true);
            _is.read(logUnknownIp, 4, true);
            _is.read(confVersion, 5, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(statisOpen,"statisOpen");
            _ds.display(simpleLogCitys,"simpleLogCitys");
            _ds.display(simplingRate,"simplingRate");
            _ds.display(logBufferLimit,"logBufferLimit");
            _ds.display(logUnknownIp,"logUnknownIp");
            _ds.display(confVersion,"confVersion");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(statisOpen, true);
            _ds.displaySimple(simpleLogCitys, true);
            _ds.displaySimple(simplingRate, true);
            _ds.displaySimple(logBufferLimit, true);
            _ds.displaySimple(logUnknownIp, true);
            _ds.displaySimple(confVersion, false);
            return _os;
        }
    public:
        taf::Bool statisOpen;
        vector<std::string> simpleLogCitys;
        taf::Int32 simplingRate;
        taf::Int32 logBufferLimit;
        taf::Bool logUnknownIp;
        taf::Int32 confVersion;
    };
    inline bool operator==(const ClientConf&l, const ClientConf&r)
    {
        return l.statisOpen == r.statisOpen && l.simpleLogCitys == r.simpleLogCitys && l.simplingRate == r.simplingRate && l.logBufferLimit == r.logBufferLimit && l.logUnknownIp == r.logUnknownIp && l.confVersion == r.confVersion;
    }
    inline bool operator!=(const ClientConf&l, const ClientConf&r)
    {
        return !(l == r);
    }

    struct CheckReq : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "newIPPro.CheckReq";
        }
        static string MD5()
        {
            return "9172b7ebadf4950b238d81a6f81c8e82";
        }
        CheckReq()
        :contentMd5(""),apiVersion(0),confVersion(0)
        {
        }
        void resetDefautlt()
        {
            contentMd5 = "";
            apiVersion = 0;
            confVersion = 0;
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write(contentMd5, 0);
            _os.write(apiVersion, 1);
            _os.write(confVersion, 2);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read(contentMd5, 0, true);
            _is.read(apiVersion, 1, true);
            _is.read(confVersion, 2, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display(contentMd5,"contentMd5");
            _ds.display(apiVersion,"apiVersion");
            _ds.display(confVersion,"confVersion");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple(contentMd5, true);
            _ds.displaySimple(apiVersion, true);
            _ds.displaySimple(confVersion, false);
            return _os;
        }
    public:
        std::string contentMd5;
        taf::UInt32 apiVersion;
        taf::Int32 confVersion;
    };
    inline bool operator==(const CheckReq&l, const CheckReq&r)
    {
        return l.contentMd5 == r.contentMd5 && l.apiVersion == r.apiVersion && l.confVersion == r.confVersion;
    }
    inline bool operator!=(const CheckReq&l, const CheckReq&r)
    {
        return !(l == r);
    }

    struct ReportInfo : public taf::JceStructBase
    {
    public:
        static string className()
        {
            return "newIPPro.ReportInfo";
        }
        static string MD5()
        {
            return "199f12fcfebc990d6fbd737ad669bdd7";
        }
        ReportInfo()
        :name("")
        {
        }
        void resetDefautlt()
        {
            name = "";
        }
        template<typename WriterT>
        void writeTo(taf::JceOutputStream<WriterT>& _os) const
        {
            _os.write((taf::Int32)type, 0);
            _os.write(name, 1);
        }
        template<typename ReaderT>
        void readFrom(taf::JceInputStream<ReaderT>& _is)
        {
            resetDefautlt();
            _is.read((taf::Int32&)type, 0, true);
            _is.read(name, 1, true);
        }
        ostream& display(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.display((taf::Int32)type,"type");
            _ds.display(name,"name");
            return _os;
        }
        ostream& displaySimple(ostream& _os, int _level=0) const
        {
            taf::JceDisplayer _ds(_os, _level);
            _ds.displaySimple((taf::Int32)type, true);
            _ds.displaySimple(name, false);
            return _os;
        }
    public:
        newIPPro::ReportType type;
        std::string name;
    };
    inline bool operator==(const ReportInfo&l, const ReportInfo&r)
    {
        return l.type == r.type && l.name == r.name;
    }
    inline bool operator!=(const ReportInfo&l, const ReportInfo&r)
    {
        return !(l == r);
    }
    inline bool operator<(const ReportInfo&l, const ReportInfo&r)
    {
        if(l.type != r.type)  return (l.type < r.type);
        if(l.name != r.name)  return (l.name < r.name);
        return false;
    }
    inline bool operator<=(const ReportInfo&l, const ReportInfo&r)
    {
        return !(r < l);
    }
    inline bool operator>(const ReportInfo&l, const ReportInfo&r)
    {
        return r < l;
    }
    inline bool operator>=(const ReportInfo&l, const ReportInfo&r)
    {
        return !(l < r);
    }


    /* callback of async proxy for client */
    class IPCreditPrxCallback: public taf::ServantProxyCallback
    {
    public:
        virtual ~IPCreditPrxCallback(){}
        virtual void callback_checkChange( const newIPPro::CheckInfo& info)
        { throw std::runtime_error("callback_checkChange() overloading incorrect."); }
        virtual void callback_checkChange_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_checkChange_exception() overloading incorrect."); }

        virtual void callback_checkChangeAdv( const newIPPro::CheckInfo& info)
        { throw std::runtime_error("callback_checkChangeAdv() overloading incorrect."); }
        virtual void callback_checkChangeAdv_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_checkChangeAdv_exception() overloading incorrect."); }

        virtual void callback_totalDownloadIPInfo( const newIPPro::downloadInfo& loadInfo)
        { throw std::runtime_error("callback_totalDownloadIPInfo() overloading incorrect."); }
        virtual void callback_totalDownloadIPInfo_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_totalDownloadIPInfo_exception() overloading incorrect."); }

        virtual void callback_totalDownloadCode( const vector<newIPPro::CodeInfo>& vCodeInfo)
        { throw std::runtime_error("callback_totalDownloadCode() overloading incorrect."); }
        virtual void callback_totalDownloadCode_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_totalDownloadCode_exception() overloading incorrect."); }

        virtual void callback_getConf(taf::Int32 ret,  const newIPPro::ClientConf& conf)
        { throw std::runtime_error("callback_getConf() overloading incorrect."); }
        virtual void callback_getConf_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_getConf_exception() overloading incorrect."); }

        virtual void callback_reportLogs(taf::Int32 ret)
        { throw std::runtime_error("callback_reportLogs() overloading incorrect."); }
        virtual void callback_reportLogs_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_reportLogs_exception() overloading incorrect."); }

        virtual void callback_report(taf::Int32 ret)
        { throw std::runtime_error("callback_report() overloading incorrect."); }
        virtual void callback_report_exception(taf::Int32 ret)
        { throw std::runtime_error("callback_report_exception() overloading incorrect."); }

    public:
        int onDispatch(taf::ReqMessagePtr msg);
    };
    typedef taf::TC_AutoPtr<IPCreditPrxCallback> IPCreditPrxCallbackPtr;

    /* proxy for client */
    class IPCreditProxy : public taf::ServantProxy
    {
    public:
        typedef map<string, string> TAF_CONTEXT;
        void checkChange(const std::string & contentMd5,newIPPro::CheckInfo &info,const map<string, string> &context = TAF_CONTEXT());
        void async_checkChange(IPCreditPrxCallbackPtr callback,const std::string & contentMd5,const map<string, string> &context = TAF_CONTEXT());

        void checkChangeAdv(const newIPPro::CheckReq & req,newIPPro::CheckInfo &info,const map<string, string> &context = TAF_CONTEXT());
        void async_checkChangeAdv(IPCreditPrxCallbackPtr callback,const newIPPro::CheckReq & req,const map<string, string> &context = TAF_CONTEXT());

        void totalDownloadIPInfo(taf::UInt32 StartPos,taf::UInt32 StartPos1,taf::UInt32 chunkLen,newIPPro::downloadInfo &loadInfo,const map<string, string> &context = TAF_CONTEXT());
        void async_totalDownloadIPInfo(IPCreditPrxCallbackPtr callback,taf::UInt32 StartPos,taf::UInt32 StartPos1,taf::UInt32 chunkLen,const map<string, string> &context = TAF_CONTEXT());

        void totalDownloadCode(vector<newIPPro::CodeInfo> &vCodeInfo,const map<string, string> &context = TAF_CONTEXT());
        void async_totalDownloadCode(IPCreditPrxCallbackPtr callback,const map<string, string> &context = TAF_CONTEXT());

        taf::Int32 getConf(newIPPro::ClientConf &conf,const map<string, string> &context = TAF_CONTEXT());
        void async_getConf(IPCreditPrxCallbackPtr callback,const map<string, string> &context = TAF_CONTEXT());

        taf::Int32 reportLogs(const vector<std::string> & logContents,const map<string, string> &context = TAF_CONTEXT());
        void async_reportLogs(IPCreditPrxCallbackPtr callback,const vector<std::string> & logContents,const map<string, string> &context = TAF_CONTEXT());

        taf::Int32 report(const map<newIPPro::ReportInfo, taf::Int64> & values,const map<string, string> &context = TAF_CONTEXT());
        void async_report(IPCreditPrxCallbackPtr callback,const map<newIPPro::ReportInfo, taf::Int64> & values,const map<string, string> &context = TAF_CONTEXT());

        IPCreditProxy* taf_hash(int64_t key);
    };
    typedef taf::TC_AutoPtr<IPCreditProxy> IPCreditPrx;

    /* servant for server */
    class IPCredit : public taf::Servant
    {
    public:
        virtual ~IPCredit(){}
        virtual void checkChange(const std::string & contentMd5,newIPPro::CheckInfo &info,taf::JceCurrentPtr current) = 0;
        static void async_response_checkChange(taf::JceCurrentPtr current, const newIPPro::CheckInfo &info);

        virtual void checkChangeAdv(const newIPPro::CheckReq & req,newIPPro::CheckInfo &info,taf::JceCurrentPtr current) = 0;
        static void async_response_checkChangeAdv(taf::JceCurrentPtr current, const newIPPro::CheckInfo &info);

        virtual void totalDownloadIPInfo(taf::UInt32 StartPos,taf::UInt32 StartPos1,taf::UInt32 chunkLen,newIPPro::downloadInfo &loadInfo,taf::JceCurrentPtr current) = 0;
        static void async_response_totalDownloadIPInfo(taf::JceCurrentPtr current, const newIPPro::downloadInfo &loadInfo);

        virtual void totalDownloadCode(vector<newIPPro::CodeInfo> &vCodeInfo,taf::JceCurrentPtr current) = 0;
        static void async_response_totalDownloadCode(taf::JceCurrentPtr current, const vector<newIPPro::CodeInfo> &vCodeInfo);

        virtual taf::Int32 getConf(newIPPro::ClientConf &conf,taf::JceCurrentPtr current) = 0;
        static void async_response_getConf(taf::JceCurrentPtr current, taf::Int32 _ret, const newIPPro::ClientConf &conf);

        virtual taf::Int32 reportLogs(const vector<std::string> & logContents,taf::JceCurrentPtr current) = 0;
        static void async_response_reportLogs(taf::JceCurrentPtr current, taf::Int32 _ret);

        virtual taf::Int32 report(const map<newIPPro::ReportInfo, taf::Int64> & values,taf::JceCurrentPtr current) = 0;
        static void async_response_report(taf::JceCurrentPtr current, taf::Int32 _ret);

    public:
        int onDispatch(taf::JceCurrentPtr _current, vector<char> &_sResponseBuffer);
    };


}

#define newIPPro_IPInfo_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.country,b.country);jce_copy_struct(a.province,b.province);jce_copy_struct(a.city,b.city);jce_copy_struct(a.district,b.district);jce_copy_struct(a.extend,b.extend);jce_copy_struct(a.oper,b.oper);jce_copy_struct(a.nettype,b.nettype);jce_copy_struct(a.apn,b.apn);jce_copy_struct(a.flable,b.flable);

#define newIPPro_IPAttribute_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.startIP,b.startIP);jce_copy_struct(a.endIP,b.endIP);jce_copy_struct(a.place,b.place);jce_copy_struct(a.extend,b.extend);jce_copy_struct(a.oper,b.oper);jce_copy_struct(a.nettype,b.nettype);jce_copy_struct(a.apn,b.apn);jce_copy_struct(a.flable,b.flable);

#define newIPPro_IPProperty_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.timesTamp,b.timesTamp);jce_copy_struct(a.sequence,b.sequence);jce_copy_struct(a.startIP,b.startIP);jce_copy_struct(a.endIP,b.endIP);jce_copy_struct(a.place,b.place);jce_copy_struct(a.extend,b.extend);jce_copy_struct(a.oper,b.oper);jce_copy_struct(a.nettype,b.nettype);jce_copy_struct(a.apn,b.apn);jce_copy_struct(a.flable,b.flable);

#define newIPPro_downloadInfo_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.highMaxIndex,b.highMaxIndex);jce_copy_struct(a.lowMaxIndex,b.lowMaxIndex);jce_copy_struct(a.isdownloadReset,b.isdownloadReset);jce_copy_struct(a.IPContent,b.IPContent);

#define newIPPro_CodeInfo_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.codeType,b.codeType);jce_copy_struct(a.ID,b.ID);jce_copy_struct(a.content,b.content);

#define newIPPro_CheckInfo_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.isNetFlow,b.isNetFlow);jce_copy_struct(a.isReset,b.isReset);jce_copy_struct(a.updateConf,b.updateConf);

#define newIPPro_ClientConf_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.statisOpen,b.statisOpen);jce_copy_struct(a.simpleLogCitys,b.simpleLogCitys);jce_copy_struct(a.simplingRate,b.simplingRate);jce_copy_struct(a.logBufferLimit,b.logBufferLimit);jce_copy_struct(a.logUnknownIp,b.logUnknownIp);jce_copy_struct(a.confVersion,b.confVersion);

#define newIPPro_CheckReq_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.contentMd5,b.contentMd5);jce_copy_struct(a.apiVersion,b.apiVersion);jce_copy_struct(a.confVersion,b.confVersion);

#define newIPPro_ReportInfo_JCE_COPY_STRUCT_HELPER   \
        jce_copy_struct(a.type,b.type);jce_copy_struct(a.name,b.name);



#endif
