/***************************************************************************
 *                                                                         *
 *   This file was automatically generated using idlc.js                   *
 *   PLEASE DO NOT EDIT!!!!                                                *
 *                                                                         *
 ***************************************************************************/

#ifndef _LruCache_base_H_
#define _LruCache_base_H_

/**
 @author Leo Hoo <lion@9465.net>
 */

#include "../object.h"

namespace fibjs
{

class LruCache_base : public object_base
{
    DECLARE_CLASS(LruCache_base);

public:
    // LruCache_base
    static result_t _new(int32_t size, int32_t timeout, obj_ptr<LruCache_base>& retVal, v8::Local<v8::Object> This = v8::Local<v8::Object>());
    virtual result_t get_size(int32_t& retVal) = 0;
    virtual result_t get_timeout(int32_t& retVal) = 0;
    virtual result_t set_timeout(int32_t newVal) = 0;
    virtual result_t clear() = 0;
    virtual result_t has(exlib::string name, bool& retVal) = 0;
    virtual result_t get(exlib::string name, v8::Local<v8::Value>& retVal) = 0;
    virtual result_t get(exlib::string name, v8::Local<v8::Function> updater, v8::Local<v8::Value>& retVal) = 0;
    virtual result_t set(exlib::string name, v8::Local<v8::Value> value) = 0;
    virtual result_t set(v8::Local<v8::Object> map) = 0;
    virtual result_t remove(exlib::string name) = 0;
    virtual result_t isEmpty(bool& retVal) = 0;

public:
    template<typename T>
    static void __new(const T &args);

public:
    static void s__new(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_get_size(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value> &args);
    static void s_get_timeout(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value> &args);
    static void s_set_timeout(v8::Local<v8::String> property, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void> &args);
    static void s_clear(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_has(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_get(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_set(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_remove(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_isEmpty(const v8::FunctionCallbackInfo<v8::Value>& args);
};

}

namespace fibjs
{
    inline ClassInfo& LruCache_base::class_info()
    {
        static ClassData::ClassMethod s_method[] = 
        {
            {"clear", s_clear, false},
            {"has", s_has, false},
            {"get", s_get, false},
            {"set", s_set, false},
            {"remove", s_remove, false},
            {"isEmpty", s_isEmpty, false}
        };

        static ClassData::ClassProperty s_property[] = 
        {
            {"size", s_get_size, block_set, false},
            {"timeout", s_get_timeout, s_set_timeout, false}
        };

        static ClassData s_cd = 
        { 
            "LruCache", false, s__new, NULL, 
            ARRAYSIZE(s_method), s_method, 0, NULL, ARRAYSIZE(s_property), s_property, NULL, NULL,
            &object_base::class_info()
        };

        static ClassInfo s_ci(s_cd);
        return s_ci;
    }

    inline void LruCache_base::s__new(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        CONSTRUCT_INIT();
        __new(args);
    }

    template<typename T>void LruCache_base::__new(const T& args)
    {
        obj_ptr<LruCache_base> vr;

        CONSTRUCT_ENTER();

        METHOD_OVER(2, 1);

        ARG(int32_t, 0);
        OPT_ARG(int32_t, 1, 0);

        hr = _new(v0, v1, vr, args.This());

        CONSTRUCT_RETURN();
    }

    inline void LruCache_base::s_get_size(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value> &args)
    {
        int32_t vr;

        METHOD_INSTANCE(LruCache_base);
        PROPERTY_ENTER();

        hr = pInst->get_size(vr);

        METHOD_RETURN();
    }

    inline void LruCache_base::s_get_timeout(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value> &args)
    {
        int32_t vr;

        METHOD_INSTANCE(LruCache_base);
        PROPERTY_ENTER();

        hr = pInst->get_timeout(vr);

        METHOD_RETURN();
    }

    inline void LruCache_base::s_set_timeout(v8::Local<v8::String> property, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void> &args)
    {
        METHOD_INSTANCE(LruCache_base);
        PROPERTY_ENTER();
        PROPERTY_VAL(int32_t);

        hr = pInst->set_timeout(v0);

        PROPERTY_SET_LEAVE();
    }

    inline void LruCache_base::s_clear(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        METHOD_INSTANCE(LruCache_base);
        METHOD_ENTER();

        METHOD_OVER(0, 0);

        hr = pInst->clear();

        METHOD_VOID();
    }

    inline void LruCache_base::s_has(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        bool vr;

        METHOD_INSTANCE(LruCache_base);
        METHOD_ENTER();

        METHOD_OVER(1, 1);

        ARG(exlib::string, 0);

        hr = pInst->has(v0, vr);

        METHOD_RETURN();
    }

    inline void LruCache_base::s_get(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        v8::Local<v8::Value> vr;

        METHOD_INSTANCE(LruCache_base);
        METHOD_ENTER();

        METHOD_OVER(1, 1);

        ARG(exlib::string, 0);

        hr = pInst->get(v0, vr);

        METHOD_OVER(2, 2);

        ARG(exlib::string, 0);
        ARG(v8::Local<v8::Function>, 1);

        hr = pInst->get(v0, v1, vr);

        METHOD_RETURN();
    }

    inline void LruCache_base::s_set(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        METHOD_INSTANCE(LruCache_base);
        METHOD_ENTER();

        METHOD_OVER(2, 2);

        ARG(exlib::string, 0);
        ARG(v8::Local<v8::Value>, 1);

        hr = pInst->set(v0, v1);

        METHOD_OVER(1, 1);

        ARG(v8::Local<v8::Object>, 0);

        hr = pInst->set(v0);

        METHOD_VOID();
    }

    inline void LruCache_base::s_remove(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        METHOD_INSTANCE(LruCache_base);
        METHOD_ENTER();

        METHOD_OVER(1, 1);

        ARG(exlib::string, 0);

        hr = pInst->remove(v0);

        METHOD_VOID();
    }

    inline void LruCache_base::s_isEmpty(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        bool vr;

        METHOD_INSTANCE(LruCache_base);
        METHOD_ENTER();

        METHOD_OVER(0, 0);

        hr = pInst->isEmpty(vr);

        METHOD_RETURN();
    }

}

#endif

