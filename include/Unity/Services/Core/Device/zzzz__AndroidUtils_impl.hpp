#pragma once
// IWYU pragma private; include "Unity/Services/Core/Device/AndroidUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Device/zzzz__AndroidUtils_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Device::AndroidUtils.GetUnityActivity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::Unity::Services::Core::Device::AndroidUtils::GetUnityActivity)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2e9c9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "GetUnityActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::AndroidUtils.GetSharedPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)(::UnityEngine::AndroidJavaObject*, ::StringW, int32_t)>(&::Unity::Services::Core::Device::AndroidUtils::GetSharedPreferences)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2e9cbc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "GetSharedPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::AndroidUtils.GetSharedPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)(::StringW, int32_t)>(&::Unity::Services::Core::Device::AndroidUtils::GetSharedPreferences)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2e9ccfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "GetSharedPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::AndroidUtils.SharedPreferencesGetString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::Unity::Services::Core::Device::AndroidUtils::SharedPreferencesGetString)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2e9ce78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "SharedPreferencesGetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::AndroidUtils.SharedPreferencesGetString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::AndroidJavaObject*, ::StringW, ::StringW)>(&::Unity::Services::Core::Device::AndroidUtils::SharedPreferencesGetString)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2e9d000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "SharedPreferencesGetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::AndroidUtils.SharedPreferencesPutString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::StringW)>(&::Unity::Services::Core::Device::AndroidUtils::SharedPreferencesPutString)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2e9d224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "SharedPreferencesPutString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Device::AndroidUtils.SharedPreferencesPutString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AndroidJavaObject*, ::StringW, ::StringW)>(&::Unity::Services::Core::Device::AndroidUtils::SharedPreferencesPutString)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2e9d39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "SharedPreferencesPutString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::AndroidJavaObject* Unity::Services::Core::Device::AndroidUtils::GetUnityActivity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "GetUnityActivity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::AndroidJavaObject* Unity::Services::Core::Device::AndroidUtils::GetSharedPreferences(::UnityEngine::AndroidJavaObject*  context, ::StringW  name, int32_t  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "GetSharedPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*, false>(nullptr, ___internal_method, context, name, mode);
}
inline ::UnityEngine::AndroidJavaObject* Unity::Services::Core::Device::AndroidUtils::GetSharedPreferences(::StringW  name, int32_t  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "GetSharedPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*, false>(nullptr, ___internal_method, name, mode);
}
inline ::StringW Unity::Services::Core::Device::AndroidUtils::SharedPreferencesGetString(::StringW  name, ::StringW  key, ::StringW  defValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "SharedPreferencesGetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name, key, defValue);
}
inline ::StringW Unity::Services::Core::Device::AndroidUtils::SharedPreferencesGetString(::UnityEngine::AndroidJavaObject*  preferences, ::StringW  key, ::StringW  defValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "SharedPreferencesGetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, preferences, key, defValue);
}
inline void Unity::Services::Core::Device::AndroidUtils::SharedPreferencesPutString(::StringW  name, ::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "SharedPreferencesPutString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, key, value);
}
inline void Unity::Services::Core::Device::AndroidUtils::SharedPreferencesPutString(::UnityEngine::AndroidJavaObject*  preferences, ::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Device::AndroidUtils*>::get(),
                        "SharedPreferencesPutString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, preferences, key, value);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Device::AndroidUtils::AndroidUtils()   {
}
