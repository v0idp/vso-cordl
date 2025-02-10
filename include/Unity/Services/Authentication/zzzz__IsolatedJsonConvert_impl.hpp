#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IsolatedJsonConvert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__IsolatedJsonConvert_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::IsolatedJsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Unity::Services::Authentication::IsolatedJsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e99b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IsolatedJsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::IsolatedJsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Unity::Services::Authentication::IsolatedJsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e99b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IsolatedJsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::IsolatedJsonConvert.SerializeObjectInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*)>(&::Unity::Services::Authentication::IsolatedJsonConvert::SerializeObjectInternal)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2e99bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IsolatedJsonConvert*>::get(),
                        "SerializeObjectInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::IsolatedJsonConvert.DeserializeObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Unity::Services::Authentication::IsolatedJsonConvert::DeserializeObject)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2e99e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IsolatedJsonConvert*>::get(),
                        "DeserializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Authentication::IsolatedJsonConvert::SerializeObject(::System::Object*  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IsolatedJsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, settings);
}
inline ::StringW Unity::Services::Authentication::IsolatedJsonConvert::SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IsolatedJsonConvert*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, type, settings);
}
inline ::StringW Unity::Services::Authentication::IsolatedJsonConvert::SerializeObjectInternal(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IsolatedJsonConvert*>::get(),
                        "SerializeObjectInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, type, jsonSerializer);
}
template<typename T>
inline T Unity::Services::Authentication::IsolatedJsonConvert::DeserializeObject(::StringW  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IsolatedJsonConvert*>::get(),
                    "DeserializeObject",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, value, settings);
}
inline ::System::Object* Unity::Services::Authentication::IsolatedJsonConvert::DeserializeObject(::StringW  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IsolatedJsonConvert*>::get(),
                        "DeserializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, value, type, settings);
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::IsolatedJsonConvert::IsolatedJsonConvert()   {
}
