#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshUvs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshUvs_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__AdjustableMeshUvs_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::AdjustableMeshUvs_Channel::AdjustableMeshUvs_Channel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshUvs_Channel::AdjustableMeshUvs_Channel()   {
}
constexpr ::VROSC::AdjustableMeshUvs_Channel  VROSC::AdjustableMeshUvs_Channel::Uv1{static_cast<int32_t>(0x0)};
constexpr ::VROSC::AdjustableMeshUvs_Channel  VROSC::AdjustableMeshUvs_Channel::Uv2{static_cast<int32_t>(0x1)};
constexpr ::VROSC::AdjustableMeshUvs_Channel  VROSC::AdjustableMeshUvs_Channel::Uv3{static_cast<int32_t>(0x2)};
constexpr ::VROSC::AdjustableMeshUvs_Channel  VROSC::AdjustableMeshUvs_Channel::Uv4{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::AdjustableMeshUvs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshUvs::*)(::VROSC::AdjustableMesh*, ::VROSC::AdjustableMeshUvs_Channel, bool)>(&::VROSC::AdjustableMeshUvs::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x17abee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMeshUvs_Channel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshUvs.SetOriginalUV
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshUvs::*)(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>)>(&::VROSC::AdjustableMeshUvs::SetOriginalUV)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17ab084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        "SetOriginalUV",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshUvs.OffsetUv
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshUvs::*)(::UnityEngine::Vector2)>(&::VROSC::AdjustableMeshUvs::OffsetUv)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x17ac174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        "OffsetUv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshUvs.SetAllUVs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshUvs::*)(::UnityEngine::Vector2)>(&::VROSC::AdjustableMeshUvs::SetAllUVs)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x17ac250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        "SetAllUVs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshUvs.SetUVs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshUvs::*)(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>)>(&::VROSC::AdjustableMeshUvs::SetUVs)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x17ac0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        "SetUVs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AdjustableMeshUvs_Channel& VROSC::AdjustableMeshUvs::__cordl_internal_get__channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr ::VROSC::AdjustableMeshUvs_Channel const& VROSC::AdjustableMeshUvs::__cordl_internal_get__channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr void VROSC::AdjustableMeshUvs::__cordl_internal_set__channel(::VROSC::AdjustableMeshUvs_Channel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channel = value;
}
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::AdjustableMeshUvs::__cordl_internal_get__adjustableMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::AdjustableMeshUvs::__cordl_internal_get__adjustableMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr void VROSC::AdjustableMeshUvs::__cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adjustableMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& VROSC::AdjustableMeshUvs::__cordl_internal_get__originalUv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalUv;
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& VROSC::AdjustableMeshUvs::__cordl_internal_get__originalUv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalUv;
}
constexpr void VROSC::AdjustableMeshUvs::__cordl_internal_set__originalUv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalUv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& VROSC::AdjustableMeshUvs::__cordl_internal_get__uv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv;
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& VROSC::AdjustableMeshUvs::__cordl_internal_get__uv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv;
}
constexpr void VROSC::AdjustableMeshUvs::__cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AdjustableMeshUvs::_ctor(::VROSC::AdjustableMesh*  adjustableMesh, ::VROSC::AdjustableMeshUvs_Channel  channel, bool  useOriginalAsUVSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMeshUvs_Channel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, adjustableMesh, channel, useOriginalAsUVSource);
}
inline void VROSC::AdjustableMeshUvs::SetOriginalUV(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        "SetOriginalUV",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uv);
}
inline void VROSC::AdjustableMeshUvs::OffsetUv(::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        "OffsetUv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset);
}
inline void VROSC::AdjustableMeshUvs::SetAllUVs(::UnityEngine::Vector2  uv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        "SetAllUVs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uv);
}
inline void VROSC::AdjustableMeshUvs::SetUVs(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshUvs*>::get(),
                        "SetUVs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uv);
}
inline ::VROSC::AdjustableMeshUvs* VROSC::AdjustableMeshUvs::New_ctor(::VROSC::AdjustableMesh*  adjustableMesh, ::VROSC::AdjustableMeshUvs_Channel  channel, bool  useOriginalAsUVSource)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMeshUvs*>(adjustableMesh, channel, useOriginalAsUVSource));
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshUvs::AdjustableMeshUvs()   {
}
