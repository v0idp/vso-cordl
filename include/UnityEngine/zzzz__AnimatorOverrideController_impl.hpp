#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorOverrideController.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_impl.hpp"
#include "UnityEngine/zzzz__AnimatorOverrideController_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimatorOverrideController_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2f538ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::*)()>(&::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f53974;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback::AnimatorOverrideController_OnOverrideControllerDirtyCallback()   {
}
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.OnInvalidateOverrideController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*)>(&::UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f538bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(),
                        "OnInvalidateOverrideController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimatorOverrideController*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*& UnityEngine::AnimatorOverrideController::__cordl_internal_get_OnOverrideControllerDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOverrideControllerDirty;
}
constexpr ::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* const& UnityEngine::AnimatorOverrideController::__cordl_internal_get_OnOverrideControllerDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOverrideControllerDirty;
}
constexpr void UnityEngine::AnimatorOverrideController::__cordl_internal_set_OnOverrideControllerDirty(::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnOverrideControllerDirty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController*  controller)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(),
                        "OnInvalidateOverrideController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimatorOverrideController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, controller);
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorOverrideController::AnimatorOverrideController()   {
}
