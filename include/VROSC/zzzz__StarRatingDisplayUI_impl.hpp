#pragma once
// IWYU pragma private; include "VROSC/StarRatingDisplayUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__StarRatingDisplayUI_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
#include "VROSC/zzzz__MinMaxFloat_def.hpp"
//  Writing Method size for method: ::VROSC::StarRatingDisplayUI.SetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StarRatingDisplayUI::*)(float_t)>(&::VROSC::StarRatingDisplayUI::SetValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1758608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StarRatingDisplayUI*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StarRatingDisplayUI.UpdateSlider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StarRatingDisplayUI::*)(float_t)>(&::VROSC::StarRatingDisplayUI::UpdateSlider)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17586e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StarRatingDisplayUI*>::get(),
                        "UpdateSlider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StarRatingDisplayUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StarRatingDisplayUI::*)()>(&::VROSC::StarRatingDisplayUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17587b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StarRatingDisplayUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::StarRatingDisplayUI::__cordl_internal_get__exactResultText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exactResultText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::StarRatingDisplayUI::__cordl_internal_get__exactResultText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exactResultText;
}
constexpr void VROSC::StarRatingDisplayUI::__cordl_internal_set__exactResultText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exactResultText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::StarRatingDisplayUI::__cordl_internal_get__starMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____starMesh;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::StarRatingDisplayUI::__cordl_internal_get__starMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____starMesh;
}
constexpr void VROSC::StarRatingDisplayUI::__cordl_internal_set__starMesh(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____starMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxFloat*& VROSC::StarRatingDisplayUI::__cordl_internal_get__uvRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uvRange;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::StarRatingDisplayUI::__cordl_internal_get__uvRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uvRange;
}
constexpr void VROSC::StarRatingDisplayUI::__cordl_internal_set__uvRange(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uvRange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::StarRatingDisplayUI::__cordl_internal_get__previewValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewValue;
}
constexpr float_t const& VROSC::StarRatingDisplayUI::__cordl_internal_get__previewValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewValue;
}
constexpr void VROSC::StarRatingDisplayUI::__cordl_internal_set__previewValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previewValue = value;
}
inline void VROSC::StarRatingDisplayUI::SetValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StarRatingDisplayUI*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::StarRatingDisplayUI::UpdateSlider(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StarRatingDisplayUI*>::get(),
                        "UpdateSlider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::StarRatingDisplayUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StarRatingDisplayUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::StarRatingDisplayUI* VROSC::StarRatingDisplayUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::StarRatingDisplayUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::StarRatingDisplayUI::StarRatingDisplayUI()   {
}
