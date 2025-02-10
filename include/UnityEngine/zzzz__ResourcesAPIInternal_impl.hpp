#pragma once
// IWYU pragma private; include "UnityEngine/ResourcesAPIInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ResourcesAPIInternal_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.FindObjectsOfTypeAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> (*)(::System::Type*)>(&::UnityEngine::ResourcesAPIInternal::FindObjectsOfTypeAll)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f86250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(),
                        "FindObjectsOfTypeAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.FindShaderByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (*)(::StringW)>(&::UnityEngine::ResourcesAPIInternal::FindShaderByName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f8628c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(),
                        "FindShaderByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPIInternal.Load
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (*)(::StringW, ::System::Type*)>(&::UnityEngine::ResourcesAPIInternal::Load)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f862c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(),
                        "Load",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> UnityEngine::ResourcesAPIInternal::FindObjectsOfTypeAll(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(),
                        "FindObjectsOfTypeAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*>, false>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::ResourcesAPIInternal::FindShaderByName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(),
                        "FindShaderByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(nullptr, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::ResourcesAPIInternal::Load(::StringW  path, ::System::Type*  systemTypeInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPIInternal*>::get(),
                        "Load",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(nullptr, ___internal_method, path, systemTypeInstance);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourcesAPIInternal::ResourcesAPIInternal()   {
}
