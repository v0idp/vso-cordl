#pragma once
// IWYU pragma private; include "Firebase/Auth/AuthUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Auth/zzzz__AuthUtil_def.hpp"
#include "Firebase/Auth/zzzz__FirebaseAuth_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Firebase::Auth::AuthUtil.CreateAuthStateListener
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Firebase::Auth::FirebaseAuth*, ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*)>(&::Firebase::Auth::AuthUtil::CreateAuthStateListener)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x18f8f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::AuthUtil*>::get(),
                        "CreateAuthStateListener",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::AuthUtil.DestroyAuthStateListener
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Auth::FirebaseAuth*, ::System::IntPtr)>(&::Firebase::Auth::AuthUtil::DestroyAuthStateListener)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18f9020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::AuthUtil*>::get(),
                        "DestroyAuthStateListener",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::AuthUtil.CreateIdTokenListener
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Firebase::Auth::FirebaseAuth*, ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*)>(&::Firebase::Auth::AuthUtil::CreateIdTokenListener)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x18f90f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::AuthUtil*>::get(),
                        "CreateIdTokenListener",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::AuthUtil.DestroyIdTokenListener
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Auth::FirebaseAuth*, ::System::IntPtr)>(&::Firebase::Auth::AuthUtil::DestroyIdTokenListener)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18f91c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::AuthUtil*>::get(),
                        "DestroyIdTokenListener",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Firebase::Auth::AuthUtil::CreateAuthStateListener(::Firebase::Auth::FirebaseAuth*  auth, ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  state_changed_delegate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::AuthUtil*>::get(),
                        "CreateAuthStateListener",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, auth, state_changed_delegate);
}
inline void Firebase::Auth::AuthUtil::DestroyAuthStateListener(::Firebase::Auth::FirebaseAuth*  auth, ::System::IntPtr  listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::AuthUtil*>::get(),
                        "DestroyAuthStateListener",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, auth, listener);
}
inline ::System::IntPtr Firebase::Auth::AuthUtil::CreateIdTokenListener(::Firebase::Auth::FirebaseAuth*  auth, ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  state_changed_delegate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::AuthUtil*>::get(),
                        "CreateIdTokenListener",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, auth, state_changed_delegate);
}
inline void Firebase::Auth::AuthUtil::DestroyIdTokenListener(::Firebase::Auth::FirebaseAuth*  auth, ::System::IntPtr  listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::AuthUtil*>::get(),
                        "DestroyIdTokenListener",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, auth, listener);
}
// Ctor Parameters []
constexpr ::Firebase::Auth::AuthUtil::AuthUtil()   {
}
