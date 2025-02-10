#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ColorOnBeat.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_impl.hpp"
#include "VROSC/AudioReactive/zzzz__ColorOnBeat_def.hpp"
#include "VROSC/AudioReactive/zzzz__LerpColorEffect_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::ColorOnBeat.get_ColorAnimation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::LerpColorEffect* (::VROSC::AudioReactive::ColorOnBeat::*)()>(&::VROSC::AudioReactive::ColorOnBeat::get_ColorAnimation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d909c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                        "get_ColorAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ColorOnBeat.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ColorOnBeat::*)()>(&::VROSC::AudioReactive::ColorOnBeat::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17d90a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ColorOnBeat.OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ColorOnBeat::*)(int32_t)>(&::VROSC::AudioReactive::ColorOnBeat::OnBeat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17d90c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ColorOnBeat._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ColorOnBeat::*)()>(&::VROSC::AudioReactive::ColorOnBeat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d90e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::LerpColorEffect*& VROSC::AudioReactive::ColorOnBeat::__cordl_internal_get__colorAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorAnimation;
}
constexpr ::VROSC::AudioReactive::LerpColorEffect* const& VROSC::AudioReactive::ColorOnBeat::__cordl_internal_get__colorAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorAnimation;
}
constexpr void VROSC::AudioReactive::ColorOnBeat::__cordl_internal_set__colorAnimation(::VROSC::AudioReactive::LerpColorEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorAnimation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::AudioReactive::LerpColorEffect* VROSC::AudioReactive::ColorOnBeat::get_ColorAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                        "get_ColorAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AudioReactive::LerpColorEffect*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ColorOnBeat::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ColorOnBeat::OnBeat(int32_t  beat)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::ColorOnBeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ColorOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ColorOnBeat* VROSC::AudioReactive::ColorOnBeat::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::ColorOnBeat*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ColorOnBeat::ColorOnBeat()   {
}
