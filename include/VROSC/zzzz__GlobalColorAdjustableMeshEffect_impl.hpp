#pragma once
// IWYU pragma private; include "VROSC/GlobalColorAdjustableMeshEffect.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshEffect_impl.hpp"
#include "VROSC/zzzz__GlobalColorAdjustableMeshEffect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__GlobalColorAdjustableMeshEffect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel::GlobalColorAdjustableMeshEffect_Channel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel::GlobalColorAdjustableMeshEffect_Channel()   {
}
constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel  VROSC::GlobalColorAdjustableMeshEffect_Channel::Channel1{static_cast<int32_t>(0x0)};
constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel  VROSC::GlobalColorAdjustableMeshEffect_Channel::Channel2{static_cast<int32_t>(0x1)};
constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel  VROSC::GlobalColorAdjustableMeshEffect_Channel::Channel3{static_cast<int32_t>(0x2)};
constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel  VROSC::GlobalColorAdjustableMeshEffect_Channel::Channel4{static_cast<int32_t>(0x3)};
constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel  VROSC::GlobalColorAdjustableMeshEffect_Channel::None{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::VROSC::GlobalColorAdjustableMeshEffect.OnCreation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GlobalColorAdjustableMeshEffect::*)()>(&::VROSC::GlobalColorAdjustableMeshEffect::OnCreation)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x17b9664;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorAdjustableMeshEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorAdjustableMeshEffect*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GlobalColorAdjustableMeshEffect.GetUVByChannel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::GlobalColorAdjustableMeshEffect::*)()>(&::VROSC::GlobalColorAdjustableMeshEffect::GetUVByChannel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17b978c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorAdjustableMeshEffect*>::get(),
                        "GetUVByChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GlobalColorAdjustableMeshEffect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GlobalColorAdjustableMeshEffect::*)()>(&::VROSC::GlobalColorAdjustableMeshEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b97b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorAdjustableMeshEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel& VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_get__channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr ::VROSC::GlobalColorAdjustableMeshEffect_Channel const& VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_get__channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr void VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_set__channel(::VROSC::GlobalColorAdjustableMeshEffect_Channel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channel = value;
}
constexpr bool& VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_get__setColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setColor;
}
constexpr bool const& VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_get__setColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setColor;
}
constexpr void VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_set__setColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setColor = value;
}
constexpr ::UnityEngine::Color& VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr ::UnityEngine::Color const& VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_set__color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____color = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_get__uv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv;
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_get__uv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv;
}
constexpr void VROSC::GlobalColorAdjustableMeshEffect::__cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::GlobalColorAdjustableMeshEffect::OnCreation()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorAdjustableMeshEffect*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 VROSC::GlobalColorAdjustableMeshEffect::GetUVByChannel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorAdjustableMeshEffect*>::get(),
                        "GetUVByChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void VROSC::GlobalColorAdjustableMeshEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorAdjustableMeshEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GlobalColorAdjustableMeshEffect* VROSC::GlobalColorAdjustableMeshEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GlobalColorAdjustableMeshEffect*>());
}
// Ctor Parameters []
constexpr ::VROSC::GlobalColorAdjustableMeshEffect::GlobalColorAdjustableMeshEffect()   {
}
