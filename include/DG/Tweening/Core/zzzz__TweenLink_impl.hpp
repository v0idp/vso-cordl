#pragma once
// IWYU pragma private; include "DG/Tweening/Core/TweenLink.hpp"
#include "DG/Tweening/zzzz__LinkBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DG/Tweening/Core/zzzz__TweenLink_def.hpp"
#include "DG/Tweening/zzzz__LinkBehaviour_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Core::TweenLink._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Core::TweenLink::*)(::UnityEngine::GameObject*, ::DG::Tweening::LinkBehaviour)>(&::DG::Tweening::Core::TweenLink::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x18e6330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenLink*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::LinkBehaviour>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& DG::Tweening::Core::TweenLink::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DG::Tweening::Core::TweenLink::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void DG::Tweening::Core::TweenLink::__cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::DG::Tweening::LinkBehaviour& DG::Tweening::Core::TweenLink::__cordl_internal_get_behaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviour;
}
constexpr ::DG::Tweening::LinkBehaviour const& DG::Tweening::Core::TweenLink::__cordl_internal_get_behaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviour;
}
constexpr void DG::Tweening::Core::TweenLink::__cordl_internal_set_behaviour(::DG::Tweening::LinkBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviour = value;
}
constexpr bool& DG::Tweening::Core::TweenLink::__cordl_internal_get_lastSeenActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenActive;
}
constexpr bool const& DG::Tweening::Core::TweenLink::__cordl_internal_get_lastSeenActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenActive;
}
constexpr void DG::Tweening::Core::TweenLink::__cordl_internal_set_lastSeenActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenActive = value;
}
inline void DG::Tweening::Core::TweenLink::_ctor(::UnityEngine::GameObject*  target, ::DG::Tweening::LinkBehaviour  behaviour)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenLink*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::LinkBehaviour>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, behaviour);
}
inline ::DG::Tweening::Core::TweenLink* DG::Tweening::Core::TweenLink::New_ctor(::UnityEngine::GameObject*  target, ::DG::Tweening::LinkBehaviour  behaviour)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Core::TweenLink*>(target, behaviour));
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::TweenLink::TweenLink()   {
}
