#pragma once
// IWYU pragma private; include "DG/Tweening/Core/ABSSequentiable.hpp"
#include "DG/Tweening/zzzz__TweenType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DG/Tweening/Core/zzzz__ABSSequentiable_def.hpp"
#include "DG/Tweening/zzzz__TweenCallback_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Core::ABSSequentiable._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Core::ABSSequentiable::*)()>(&::DG::Tweening::Core::ABSSequentiable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e37e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::ABSSequentiable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::DG::Tweening::TweenType& DG::Tweening::Core::ABSSequentiable::__cordl_internal_get_tweenType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tweenType;
}
constexpr ::DG::Tweening::TweenType const& DG::Tweening::Core::ABSSequentiable::__cordl_internal_get_tweenType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tweenType;
}
constexpr void DG::Tweening::Core::ABSSequentiable::__cordl_internal_set_tweenType(::DG::Tweening::TweenType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tweenType = value;
}
constexpr float_t& DG::Tweening::Core::ABSSequentiable::__cordl_internal_get_sequencedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencedPosition;
}
constexpr float_t const& DG::Tweening::Core::ABSSequentiable::__cordl_internal_get_sequencedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencedPosition;
}
constexpr void DG::Tweening::Core::ABSSequentiable::__cordl_internal_set_sequencedPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequencedPosition = value;
}
constexpr float_t& DG::Tweening::Core::ABSSequentiable::__cordl_internal_get_sequencedEndPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencedEndPosition;
}
constexpr float_t const& DG::Tweening::Core::ABSSequentiable::__cordl_internal_get_sequencedEndPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencedEndPosition;
}
constexpr void DG::Tweening::Core::ABSSequentiable::__cordl_internal_set_sequencedEndPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequencedEndPosition = value;
}
constexpr ::DG::Tweening::TweenCallback*& DG::Tweening::Core::ABSSequentiable::__cordl_internal_get_onStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStart;
}
constexpr ::DG::Tweening::TweenCallback* const& DG::Tweening::Core::ABSSequentiable::__cordl_internal_get_onStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStart;
}
constexpr void DG::Tweening::Core::ABSSequentiable::__cordl_internal_set_onStart(::DG::Tweening::TweenCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::Core::ABSSequentiable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::ABSSequentiable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DG::Tweening::Core::ABSSequentiable* DG::Tweening::Core::ABSSequentiable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Core::ABSSequentiable*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::ABSSequentiable::ABSSequentiable()   {
}
