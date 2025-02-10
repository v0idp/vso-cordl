#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshColor16bits.hpp"
#include "VROSC/zzzz__AdjustableMeshColors_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshColor16bits_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
//  Writing Method size for method: ::VROSC::AdjustableMeshColor16bits._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColor16bits::*)(::VROSC::AdjustableMesh*)>(&::VROSC::AdjustableMeshColor16bits::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x17ab39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshColor16bits.CalculateColorMultiplication
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColor16bits::*)()>(&::VROSC::AdjustableMeshColor16bits::CalculateColorMultiplication)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x17ab5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                        "CalculateColorMultiplication",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshColor16bits.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColor16bits::*)(::UnityEngine::Color)>(&::VROSC::AdjustableMeshColor16bits::SetColor)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x17ab694;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshColor16bits.Tint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshColor16bits::*)(::UnityEngine::Color, float_t)>(&::VROSC::AdjustableMeshColor16bits::Tint)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x17ab8fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void VROSC::AdjustableMeshColor16bits::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__originalColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalColors;
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__originalColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalColors;
}
constexpr void VROSC::AdjustableMeshColor16bits::__cordl_internal_set__originalColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__adjustedColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustedColors;
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__adjustedColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustedColors;
}
constexpr void VROSC::AdjustableMeshColor16bits::__cordl_internal_set__adjustedColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adjustedColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__shownColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shownColors;
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__shownColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shownColors;
}
constexpr void VROSC::AdjustableMeshColor16bits::__cordl_internal_set__shownColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shownColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__multiplyValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplyValue;
}
constexpr float_t const& VROSC::AdjustableMeshColor16bits::__cordl_internal_get__multiplyValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplyValue;
}
constexpr void VROSC::AdjustableMeshColor16bits::__cordl_internal_set__multiplyValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____multiplyValue = value;
}
inline void VROSC::AdjustableMeshColor16bits::_ctor(::VROSC::AdjustableMesh*  adjustableMesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, adjustableMesh);
}
inline void VROSC::AdjustableMeshColor16bits::CalculateColorMultiplication()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                        "CalculateColorMultiplication",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AdjustableMeshColor16bits::SetColor(::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::AdjustableMeshColor16bits::Tint(::UnityEngine::Color  color, float_t  amount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshColor16bits*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, amount);
}
inline ::VROSC::AdjustableMeshColor16bits* VROSC::AdjustableMeshColor16bits::New_ctor(::VROSC::AdjustableMesh*  adjustableMesh)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMeshColor16bits*>(adjustableMesh));
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshColor16bits::AdjustableMeshColor16bits()   {
}
