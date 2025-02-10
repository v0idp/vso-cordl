#pragma once
// IWYU pragma private; include "GlobalNamespace/CloudPillarTiming.hpp"
#include "GlobalNamespace/zzzz__StaticBatchable_impl.hpp"
#include "GlobalNamespace/zzzz__CloudPillarTiming_def.hpp"
#include "GlobalNamespace/zzzz__CloudPillarTiming_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CloudPillarTiming_Channel::CloudPillarTiming_Channel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CloudPillarTiming_Channel::CloudPillarTiming_Channel()   {
}
constexpr ::GlobalNamespace::CloudPillarTiming_Channel  GlobalNamespace::CloudPillarTiming_Channel::Channel1{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CloudPillarTiming_Channel  GlobalNamespace::CloudPillarTiming_Channel::Channel2{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CloudPillarTiming_Channel  GlobalNamespace::CloudPillarTiming_Channel::Channel3{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CloudPillarTiming_Channel  GlobalNamespace::CloudPillarTiming_Channel::Channel4{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CloudPillarTiming_Channel  GlobalNamespace::CloudPillarTiming_Channel::None{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::CloudPillarTiming.Bake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CloudPillarTiming::*)()>(&::GlobalNamespace::CloudPillarTiming::Bake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x16c57cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudPillarTiming*>::get(),
                        "Bake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CloudPillarTiming.GetOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CloudPillarTiming::*)()>(&::GlobalNamespace::CloudPillarTiming::GetOffset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x16c5908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudPillarTiming*>::get(),
                        "GetOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CloudPillarTiming.BeforeBatching
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CloudPillarTiming::*)()>(&::GlobalNamespace::CloudPillarTiming::BeforeBatching)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x16c592c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudPillarTiming*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudPillarTiming*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CloudPillarTiming._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CloudPillarTiming::*)()>(&::GlobalNamespace::CloudPillarTiming::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c5964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudPillarTiming*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CloudPillarTiming_Channel& GlobalNamespace::CloudPillarTiming::__cordl_internal_get__channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr ::GlobalNamespace::CloudPillarTiming_Channel const& GlobalNamespace::CloudPillarTiming::__cordl_internal_get__channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr void GlobalNamespace::CloudPillarTiming::__cordl_internal_set__channel(::GlobalNamespace::CloudPillarTiming_Channel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channel = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::CloudPillarTiming::__cordl_internal_get__meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::CloudPillarTiming::__cordl_internal_get__meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr void GlobalNamespace::CloudPillarTiming::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& GlobalNamespace::CloudPillarTiming::__cordl_internal_get__uv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv;
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& GlobalNamespace::CloudPillarTiming::__cordl_internal_get__uv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv;
}
constexpr void GlobalNamespace::CloudPillarTiming::__cordl_internal_set__uv(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CloudPillarTiming::Bake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudPillarTiming*>::get(),
                        "Bake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CloudPillarTiming::GetOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudPillarTiming*>::get(),
                        "GetOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::CloudPillarTiming::BeforeBatching()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudPillarTiming*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CloudPillarTiming::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudPillarTiming*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CloudPillarTiming* GlobalNamespace::CloudPillarTiming::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CloudPillarTiming*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CloudPillarTiming::CloudPillarTiming()   {
}
