#pragma once
// IWYU pragma private; include "VROSC/SynthVolumeController.hpp"
#include "VROSC/zzzz__InstrumentVolumeController_impl.hpp"
#include "VROSC/zzzz__SynthVolumeController_def.hpp"
#include "VROSC/zzzz__InstrumentController_def.hpp"
#include "VROSC/zzzz__InstrumentDataController_def.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
//  Writing Method size for method: ::VROSC::SynthVolumeController.get__synth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::SynthController> (::VROSC::SynthVolumeController::*)()>(&::VROSC::SynthVolumeController::get__synth)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x170f630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                        "get__synth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthVolumeController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthVolumeController::*)(::VROSC::InstrumentController*, ::VROSC::InstrumentDataController*)>(&::VROSC::SynthVolumeController::Setup)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x170f6a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthVolumeController.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthVolumeController::*)()>(&::VROSC::SynthVolumeController::OnDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x170f8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthVolumeController.PatchChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthVolumeController::*)()>(&::VROSC::SynthVolumeController::PatchChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x170f84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                        "PatchChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthVolumeController.CalculateVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthVolumeController::*)()>(&::VROSC::SynthVolumeController::CalculateVolume)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x170f9c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthVolumeController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthVolumeController::*)()>(&::VROSC::SynthVolumeController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x170fbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::SynthVolumeController::__cordl_internal_get__helmDefaultVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmDefaultVolume;
}
constexpr float_t const& VROSC::SynthVolumeController::__cordl_internal_get__helmDefaultVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmDefaultVolume;
}
constexpr void VROSC::SynthVolumeController::__cordl_internal_set__helmDefaultVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____helmDefaultVolume = value;
}
constexpr float_t& VROSC::SynthVolumeController::__cordl_internal_get__driveNormalizationInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____driveNormalizationInfluence;
}
constexpr float_t const& VROSC::SynthVolumeController::__cordl_internal_get__driveNormalizationInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____driveNormalizationInfluence;
}
constexpr void VROSC::SynthVolumeController::__cordl_internal_set__driveNormalizationInfluence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____driveNormalizationInfluence = value;
}
inline ::UnityW<::VROSC::SynthController> VROSC::SynthVolumeController::get__synth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                        "get__synth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::SynthController>, false>(this, ___internal_method);
}
inline void VROSC::SynthVolumeController::Setup(::VROSC::InstrumentController*  instrument, ::VROSC::InstrumentDataController*  dataController)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrument, dataController);
}
inline void VROSC::SynthVolumeController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthVolumeController::PatchChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                        "PatchChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthVolumeController::CalculateVolume()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthVolumeController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthVolumeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SynthVolumeController* VROSC::SynthVolumeController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthVolumeController*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthVolumeController::SynthVolumeController()   {
}
