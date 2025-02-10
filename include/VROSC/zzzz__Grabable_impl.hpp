#pragma once
// IWYU pragma private; include "VROSC/Grabable.hpp"
#include "VROSC/zzzz__Interactable_impl.hpp"
#include "VROSC/zzzz__Grabable_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "VROSC/zzzz__GrabData_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::VROSC::Grabable.Grab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Grabable::*)(::VROSC::GrabData*, bool)>(&::VROSC::Grabable::Grab)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x188fe60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Grabable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Grabable*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Grabable._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Grabable::*)()>(&::VROSC::Grabable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x188ff10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Grabable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::Grabable::setStaticF_OnGrab(::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*, "OnGrab", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Grabable*>::get>(std::forward<::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*>(value));
}
inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>* VROSC::Grabable::getStaticF_OnGrab()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*, "OnGrab", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Grabable*>::get>();
}
inline void VROSC::Grabable::Grab(::VROSC::GrabData*  grabData, bool  grabbing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Grabable*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabData, grabbing);
}
inline void VROSC::Grabable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Grabable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Grabable* VROSC::Grabable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Grabable*>());
}
// Ctor Parameters []
constexpr ::VROSC::Grabable::Grabable()   {
}
