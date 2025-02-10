#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/RotateOnBeat.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_impl.hpp"
#include "VROSC/AudioReactive/zzzz__RotateOnBeat_def.hpp"
#include "VROSC/AudioReactive/zzzz__RotateEffect_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::RotateOnBeat.get_RotateAnimation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::RotateEffect* (::VROSC::AudioReactive::RotateOnBeat::*)()>(&::VROSC::AudioReactive::RotateOnBeat::get_RotateAnimation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dba50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                        "get_RotateAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::RotateOnBeat.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::RotateOnBeat::*)()>(&::VROSC::AudioReactive::RotateOnBeat::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17dba58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::RotateOnBeat.OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::RotateOnBeat::*)(int32_t)>(&::VROSC::AudioReactive::RotateOnBeat::OnBeat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17dba7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::RotateOnBeat._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::RotateOnBeat::*)()>(&::VROSC::AudioReactive::RotateOnBeat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dba9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::RotateEffect*& VROSC::AudioReactive::RotateOnBeat::__cordl_internal_get__rotationAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationAnimation;
}
constexpr ::VROSC::AudioReactive::RotateEffect* const& VROSC::AudioReactive::RotateOnBeat::__cordl_internal_get__rotationAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationAnimation;
}
constexpr void VROSC::AudioReactive::RotateOnBeat::__cordl_internal_set__rotationAnimation(::VROSC::AudioReactive::RotateEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationAnimation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::AudioReactive::RotateEffect* VROSC::AudioReactive::RotateOnBeat::get_RotateAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                        "get_RotateAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AudioReactive::RotateEffect*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::RotateOnBeat::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::RotateOnBeat::OnBeat(int32_t  beat)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::RotateOnBeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::RotateOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::RotateOnBeat* VROSC::AudioReactive::RotateOnBeat::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::RotateOnBeat*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::RotateOnBeat::RotateOnBeat()   {
}
