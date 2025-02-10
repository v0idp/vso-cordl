#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshTransformUVEffect.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshEffect_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshTransformUVEffect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__AdjustableMeshTransformUVEffect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel::AdjustableMeshTransformUVEffect_Channel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel::AdjustableMeshTransformUVEffect_Channel()   {
}
constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel  VROSC::AdjustableMeshTransformUVEffect_Channel::Uv1{static_cast<int32_t>(0x0)};
constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel  VROSC::AdjustableMeshTransformUVEffect_Channel::Uv2{static_cast<int32_t>(0x1)};
constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel  VROSC::AdjustableMeshTransformUVEffect_Channel::Uv3{static_cast<int32_t>(0x2)};
constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel  VROSC::AdjustableMeshTransformUVEffect_Channel::Uv4{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::AdjustableMeshTransformUVEffect.SetOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshTransformUVEffect::*)(::UnityEngine::Vector2)>(&::VROSC::AdjustableMeshTransformUVEffect::SetOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a7338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTransformUVEffect*>::get(),
                        "SetOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshTransformUVEffect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshTransformUVEffect::*)()>(&::VROSC::AdjustableMeshTransformUVEffect::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17a7340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTransformUVEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr ::UnityEngine::Vector2 const& VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_set__offset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel& VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_get__channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr ::VROSC::AdjustableMeshTransformUVEffect_Channel const& VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_get__channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr void VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_set__channel(::VROSC::AdjustableMeshTransformUVEffect_Channel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channel = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_get__originalUv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalUv;
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_get__originalUv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalUv;
}
constexpr void VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_set__originalUv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalUv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_get__uv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv;
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_get__uv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv;
}
constexpr void VROSC::AdjustableMeshTransformUVEffect::__cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AdjustableMeshTransformUVEffect::SetOffset(::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTransformUVEffect*>::get(),
                        "SetOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset);
}
inline void VROSC::AdjustableMeshTransformUVEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshTransformUVEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AdjustableMeshTransformUVEffect* VROSC::AdjustableMeshTransformUVEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMeshTransformUVEffect*>());
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshTransformUVEffect::AdjustableMeshTransformUVEffect()   {
}
