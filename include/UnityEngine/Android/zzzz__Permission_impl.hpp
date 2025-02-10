#pragma once
// IWYU pragma private; include "UnityEngine/Android/Permission.hpp"
#include "UnityEngine/Android/zzzz__Permission_def.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::Permission.GetUnityPermissions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::UnityEngine::Android::Permission::GetUnityPermissions)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f5276c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "GetUnityPermissions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.HasUserAuthorizedPermission
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Android::Permission::HasUserAuthorizedPermission)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2f5281c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "HasUserAuthorizedPermission",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.RequestUserPermission
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::Android::Permission::RequestUserPermission)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f5293c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "RequestUserPermission",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.RequestUserPermission
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Android::PermissionCallbacks*)>(&::UnityEngine::Android::Permission::RequestUserPermission)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f52aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "RequestUserPermission",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::PermissionCallbacks*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.RequestUserPermissions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::StringW,::Array<::StringW>*>, ::UnityEngine::Android::PermissionCallbacks*)>(&::UnityEngine::Android::Permission::RequestUserPermissions)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2f529b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "RequestUserPermissions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::PermissionCallbacks*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Android::Permission::setStaticF_m_UnityPermissions(::UnityEngine::AndroidJavaObject*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject*, "m_UnityPermissions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get>(std::forward<::UnityEngine::AndroidJavaObject*>(value));
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::Permission::getStaticF_m_UnityPermissions()  {
return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject*, "m_UnityPermissions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get>();
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::Permission::GetUnityPermissions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "GetUnityPermissions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Android::Permission::HasUserAuthorizedPermission(::StringW  permission)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "HasUserAuthorizedPermission",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, permission);
}
inline void UnityEngine::Android::Permission::RequestUserPermission(::StringW  permission)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "RequestUserPermission",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permission);
}
inline void UnityEngine::Android::Permission::RequestUserPermission(::StringW  permission, ::UnityEngine::Android::PermissionCallbacks*  callbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "RequestUserPermission",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::PermissionCallbacks*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permission, callbacks);
}
inline void UnityEngine::Android::Permission::RequestUserPermissions(::ArrayW<::StringW,::Array<::StringW>*>  permissions, ::UnityEngine::Android::PermissionCallbacks*  callbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::Permission>::get(),
                        "RequestUserPermissions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Android::PermissionCallbacks*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissions, callbacks);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::Permission::Permission()   {
}
