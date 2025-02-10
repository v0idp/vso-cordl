#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/TransformOnBeat.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_impl.hpp"
#include "VROSC/AudioReactive/zzzz__TransformOnBeat_def.hpp"
#include "VROSC/AudioReactive/zzzz__TranslateEffect_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::TransformOnBeat.get_TranslateAnimation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::TranslateEffect* (::VROSC::AudioReactive::TransformOnBeat::*)()>(&::VROSC::AudioReactive::TransformOnBeat::get_TranslateAnimation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dbaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                        "get_TranslateAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TransformOnBeat.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TransformOnBeat::*)()>(&::VROSC::AudioReactive::TransformOnBeat::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17dbb00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TransformOnBeat.OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TransformOnBeat::*)(int32_t)>(&::VROSC::AudioReactive::TransformOnBeat::OnBeat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17dbb24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TransformOnBeat._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TransformOnBeat::*)()>(&::VROSC::AudioReactive::TransformOnBeat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dbb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::TranslateEffect*& VROSC::AudioReactive::TransformOnBeat::__cordl_internal_get__transformAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformAnimation;
}
constexpr ::VROSC::AudioReactive::TranslateEffect* const& VROSC::AudioReactive::TransformOnBeat::__cordl_internal_get__transformAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformAnimation;
}
constexpr void VROSC::AudioReactive::TransformOnBeat::__cordl_internal_set__transformAnimation(::VROSC::AudioReactive::TranslateEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformAnimation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::AudioReactive::TranslateEffect* VROSC::AudioReactive::TransformOnBeat::get_TranslateAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                        "get_TranslateAnimation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AudioReactive::TranslateEffect*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::TransformOnBeat::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::TransformOnBeat::OnBeat(int32_t  beat)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::TransformOnBeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TransformOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::TransformOnBeat* VROSC::AudioReactive::TransformOnBeat::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::TransformOnBeat*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::TransformOnBeat::TransformOnBeat()   {
}
