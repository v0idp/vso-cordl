#pragma once
// IWYU pragma private; include "Firebase/AppUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/zzzz__AppUtil_def.hpp"
#include "Firebase/zzzz__LogUtil_def.hpp"
//  Writing Method size for method: ::Firebase::AppUtil.PollCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Firebase::AppUtil::PollCallbacks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x18f038c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "PollCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::AppUtil.AppEnableLogCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Firebase::AppUtil::AppEnableLogCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18f0404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "AppEnableLogCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::AppUtil.SetEnabledAllAppCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Firebase::AppUtil::SetEnabledAllAppCallbacks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18f0484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "SetEnabledAllAppCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::AppUtil.SetEnabledAppCallbackByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&::Firebase::AppUtil::SetEnabledAppCallbackByName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18f0504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "SetEnabledAppCallbackByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::AppUtil.GetEnabledAppCallbackByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Firebase::AppUtil::GetEnabledAppCallbackByName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x18f0594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "GetEnabledAppCallbackByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::AppUtil.SetLogFunction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::LogUtil_LogMessageDelegate*)>(&::Firebase::AppUtil::SetLogFunction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18f061c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "SetLogFunction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::LogUtil_LogMessageDelegate*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Firebase::AppUtil::PollCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "PollCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Firebase::AppUtil::AppEnableLogCallback(bool  arg0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "AppEnableLogCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arg0);
}
inline void Firebase::AppUtil::SetEnabledAllAppCallbacks(bool  arg0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "SetEnabledAllAppCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arg0);
}
inline void Firebase::AppUtil::SetEnabledAppCallbackByName(::StringW  arg0, bool  arg1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "SetEnabledAppCallbackByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arg0, arg1);
}
inline bool Firebase::AppUtil::GetEnabledAppCallbackByName(::StringW  arg0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "GetEnabledAppCallbackByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, arg0);
}
inline void Firebase::AppUtil::SetLogFunction(::Firebase::LogUtil_LogMessageDelegate*  arg0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::AppUtil*>::get(),
                        "SetLogFunction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::LogUtil_LogMessageDelegate*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arg0);
}
// Ctor Parameters []
constexpr ::Firebase::AppUtil::AppUtil()   {
}
