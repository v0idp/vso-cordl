#pragma once
// IWYU pragma private; include "VROSC/SetTooltipsOnInteractable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SetTooltipsOnInteractable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
//  Writing Method size for method: ::VROSC::SetTooltipsOnInteractable.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetTooltipsOnInteractable::*)()>(&::VROSC::SetTooltipsOnInteractable::Start)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1890888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetTooltipsOnInteractable*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetTooltipsOnInteractable._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetTooltipsOnInteractable::*)()>(&::VROSC::SetTooltipsOnInteractable::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x18908e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetTooltipsOnInteractable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& VROSC::SetTooltipsOnInteractable::__cordl_internal_get__tooltipDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipDatas;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& VROSC::SetTooltipsOnInteractable::__cordl_internal_get__tooltipDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipDatas;
}
constexpr void VROSC::SetTooltipsOnInteractable::__cordl_internal_set__tooltipDatas(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tooltipDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SetTooltipsOnInteractable::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetTooltipsOnInteractable*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SetTooltipsOnInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetTooltipsOnInteractable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SetTooltipsOnInteractable* VROSC::SetTooltipsOnInteractable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SetTooltipsOnInteractable*>());
}
// Ctor Parameters []
constexpr ::VROSC::SetTooltipsOnInteractable::SetTooltipsOnInteractable()   {
}
