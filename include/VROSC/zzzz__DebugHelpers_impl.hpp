#pragma once
// IWYU pragma private; include "VROSC/DebugHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__DebugHelpers_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::VROSC::DebugHelpers.GetTransformPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&::VROSC::DebugHelpers::GetTransformPath)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1883d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugHelpers*>::get(),
                        "GetTransformPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DebugHelpers.GetParentPathRecursive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Transform*, ::StringW)>(&::VROSC::DebugHelpers::GetParentPathRecursive)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1883d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugHelpers*>::get(),
                        "GetParentPathRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW VROSC::DebugHelpers::GetTransformPath(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugHelpers*>::get(),
                        "GetTransformPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, transform);
}
inline ::StringW VROSC::DebugHelpers::GetParentPathRecursive(::UnityEngine::Transform*  transform, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DebugHelpers*>::get(),
                        "GetParentPathRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, transform, text);
}
// Ctor Parameters []
constexpr ::VROSC::DebugHelpers::DebugHelpers()   {
}
