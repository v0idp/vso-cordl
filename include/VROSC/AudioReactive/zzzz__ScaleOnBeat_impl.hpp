#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ScaleOnBeat.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_impl.hpp"
#include "VROSC/AudioReactive/zzzz__ScaleOnBeat_def.hpp"
#include "VROSC/AudioReactive/zzzz__ScaleEffect_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::ScaleOnBeat.get_ScaleAnimation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::ScaleEffect* (::VROSC::AudioReactive::ScaleOnBeat::*)()>(&::VROSC::AudioReactive::ScaleOnBeat::get_ScaleAnimation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dbaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                        "get_ScaleAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ScaleOnBeat.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ScaleOnBeat::*)()>(&::VROSC::AudioReactive::ScaleOnBeat::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17dbaac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ScaleOnBeat.OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ScaleOnBeat::*)(int32_t)>(&::VROSC::AudioReactive::ScaleOnBeat::OnBeat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17dbad0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ScaleOnBeat._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ScaleOnBeat::*)()>(&::VROSC::AudioReactive::ScaleOnBeat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dbaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::ScaleEffect*& VROSC::AudioReactive::ScaleOnBeat::__cordl_internal_get__scaleAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleAnimation;
}
constexpr ::VROSC::AudioReactive::ScaleEffect* const& VROSC::AudioReactive::ScaleOnBeat::__cordl_internal_get__scaleAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleAnimation;
}
constexpr void VROSC::AudioReactive::ScaleOnBeat::__cordl_internal_set__scaleAnimation(::VROSC::AudioReactive::ScaleEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scaleAnimation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::AudioReactive::ScaleEffect* VROSC::AudioReactive::ScaleOnBeat::get_ScaleAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                        "get_ScaleAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AudioReactive::ScaleEffect*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ScaleOnBeat::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ScaleOnBeat::OnBeat(int32_t  beat)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::ScaleOnBeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ScaleOnBeat* VROSC::AudioReactive::ScaleOnBeat::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::ScaleOnBeat*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ScaleOnBeat::ScaleOnBeat()   {
}
