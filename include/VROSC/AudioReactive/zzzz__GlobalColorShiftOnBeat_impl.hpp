#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/GlobalColorShiftOnBeat.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_impl.hpp"
#include "VROSC/AudioReactive/zzzz__GlobalColorShiftOnBeat_def.hpp"
#include "VROSC/AudioReactive/zzzz__GlobalColorShiftEffect_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::GlobalColorShiftOnBeat.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::GlobalColorShiftOnBeat::*)()>(&::VROSC::AudioReactive::GlobalColorShiftOnBeat::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17da330;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::GlobalColorShiftOnBeat.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::GlobalColorShiftOnBeat::*)()>(&::VROSC::AudioReactive::GlobalColorShiftOnBeat::Update)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17da354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::GlobalColorShiftOnBeat.OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::GlobalColorShiftOnBeat::*)(int32_t)>(&::VROSC::AudioReactive::GlobalColorShiftOnBeat::OnBeat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17da374;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::GlobalColorShiftOnBeat.SetNewGlobalColors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::GlobalColorShiftOnBeat::*)()>(&::VROSC::AudioReactive::GlobalColorShiftOnBeat::SetNewGlobalColors)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x17da394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                        "SetNewGlobalColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::GlobalColorShiftOnBeat._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::GlobalColorShiftOnBeat::*)()>(&::VROSC::AudioReactive::GlobalColorShiftOnBeat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17da5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::GlobalColorShiftEffect*& VROSC::AudioReactive::GlobalColorShiftOnBeat::__cordl_internal_get__globalColorEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalColorEffect;
}
constexpr ::VROSC::AudioReactive::GlobalColorShiftEffect* const& VROSC::AudioReactive::GlobalColorShiftOnBeat::__cordl_internal_get__globalColorEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____globalColorEffect;
}
constexpr void VROSC::AudioReactive::GlobalColorShiftOnBeat::__cordl_internal_set__globalColorEffect(::VROSC::AudioReactive::GlobalColorShiftEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalColorEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AudioReactive::GlobalColorShiftOnBeat::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::GlobalColorShiftOnBeat::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::GlobalColorShiftOnBeat::OnBeat(int32_t  beat)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::GlobalColorShiftOnBeat::SetNewGlobalColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                        "SetNewGlobalColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::GlobalColorShiftOnBeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::GlobalColorShiftOnBeat* VROSC::AudioReactive::GlobalColorShiftOnBeat::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::GlobalColorShiftOnBeat*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::GlobalColorShiftOnBeat::GlobalColorShiftOnBeat()   {
}
