#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/AudioReactiveBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat::AudioReactiveBehaviour_ReactiveBeat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat::AudioReactiveBehaviour_ReactiveBeat()   {
}
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat::Beat1{static_cast<int32_t>(0x1)};
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat::Beat2{static_cast<int32_t>(0x2)};
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat::Beat3{static_cast<int32_t>(0x4)};
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat::Beat4{static_cast<int32_t>(0x8)};
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat::PlayerBass{static_cast<int32_t>(0x10)};
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat::PlayerMid{static_cast<int32_t>(0x20)};
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat::PlayerTop{static_cast<int32_t>(0x40)};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveBehaviour.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::AudioReactiveBehaviour::*)()>(&::VROSC::AudioReactive::AudioReactiveBehaviour::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17d80b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveBehaviour.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::AudioReactiveBehaviour::*)()>(&::VROSC::AudioReactive::AudioReactiveBehaviour::OnEnable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x17d80b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveBehaviour.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::AudioReactiveBehaviour::*)()>(&::VROSC::AudioReactive::AudioReactiveBehaviour::OnDisable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x17d81b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveBehaviour.FilterBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::AudioReactiveBehaviour::*)(int32_t)>(&::VROSC::AudioReactive::AudioReactiveBehaviour::FilterBeat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x17d82a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                        "FilterBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveBehaviour.OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::AudioReactiveBehaviour::*)(int32_t)>(&::VROSC::AudioReactive::AudioReactiveBehaviour::OnBeat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17d82ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::AudioReactiveBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::AudioReactiveBehaviour::*)()>(&::VROSC::AudioReactive::AudioReactiveBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d82f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat& VROSC::AudioReactive::AudioReactiveBehaviour::__cordl_internal_get__reactOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactOn;
}
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat const& VROSC::AudioReactive::AudioReactiveBehaviour::__cordl_internal_get__reactOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactOn;
}
constexpr void VROSC::AudioReactive::AudioReactiveBehaviour::__cordl_internal_set__reactOn(::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reactOn = value;
}
constexpr int32_t& VROSC::AudioReactive::AudioReactiveBehaviour::__cordl_internal_get__coolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coolDown;
}
constexpr int32_t const& VROSC::AudioReactive::AudioReactiveBehaviour::__cordl_internal_get__coolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coolDown;
}
constexpr void VROSC::AudioReactive::AudioReactiveBehaviour::__cordl_internal_set__coolDown(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coolDown = value;
}
constexpr int32_t& VROSC::AudioReactive::AudioReactiveBehaviour::__cordl_internal_get__onCoolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCoolDown;
}
constexpr int32_t const& VROSC::AudioReactive::AudioReactiveBehaviour::__cordl_internal_get__onCoolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCoolDown;
}
constexpr void VROSC::AudioReactive::AudioReactiveBehaviour::__cordl_internal_set__onCoolDown(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onCoolDown = value;
}
inline void VROSC::AudioReactive::AudioReactiveBehaviour::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::AudioReactiveBehaviour::OnEnable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::AudioReactiveBehaviour::OnDisable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::AudioReactiveBehaviour::FilterBeat(int32_t  beat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                        "FilterBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::AudioReactiveBehaviour::OnBeat(int32_t  beat)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::AudioReactiveBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::AudioReactiveBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::AudioReactiveBehaviour* VROSC::AudioReactive::AudioReactiveBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::AudioReactiveBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour::AudioReactiveBehaviour()   {
}
