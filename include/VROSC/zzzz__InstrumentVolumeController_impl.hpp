#pragma once
// IWYU pragma private; include "VROSC/InstrumentVolumeController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__InstrumentVolumeController_def.hpp"
#include "VROSC/zzzz__InstrumentController_def.hpp"
#include "VROSC/zzzz__InstrumentDataController_def.hpp"
//  Writing Method size for method: ::VROSC::InstrumentVolumeController.get_Volume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::InstrumentVolumeController::*)()>(&::VROSC::InstrumentVolumeController::get_Volume)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x170e968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                        "get_Volume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentVolumeController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentVolumeController::*)(::VROSC::InstrumentController*, ::VROSC::InstrumentDataController*)>(&::VROSC::InstrumentVolumeController::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170e98c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentVolumeController.SetVolumeMultiplier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentVolumeController::*)(float_t)>(&::VROSC::InstrumentVolumeController::SetVolumeMultiplier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x170e994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                        "SetVolumeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentVolumeController.CalculateVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentVolumeController::*)()>(&::VROSC::InstrumentVolumeController::CalculateVolume)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x170e9f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentVolumeController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentVolumeController::*)()>(&::VROSC::InstrumentVolumeController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170e9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::InstrumentController>& VROSC::InstrumentVolumeController::__cordl_internal_get__instrument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr ::UnityW<::VROSC::InstrumentController> const& VROSC::InstrumentVolumeController::__cordl_internal_get__instrument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr void VROSC::InstrumentVolumeController::__cordl_internal_set__instrument(::UnityW<::VROSC::InstrumentController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::InstrumentDataController*& VROSC::InstrumentVolumeController::__cordl_internal_get__dataController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataController;
}
constexpr ::VROSC::InstrumentDataController* const& VROSC::InstrumentVolumeController::__cordl_internal_get__dataController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataController;
}
constexpr void VROSC::InstrumentVolumeController::__cordl_internal_set__dataController(::VROSC::InstrumentDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t VROSC::InstrumentVolumeController::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                        "get_Volume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::InstrumentVolumeController::Setup(::VROSC::InstrumentController*  instrument, ::VROSC::InstrumentDataController*  dataController)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrument, dataController);
}
inline void VROSC::InstrumentVolumeController::SetVolumeMultiplier(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                        "SetVolumeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::InstrumentVolumeController::CalculateVolume()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InstrumentVolumeController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentVolumeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InstrumentVolumeController* VROSC::InstrumentVolumeController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentVolumeController*>());
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentVolumeController::InstrumentVolumeController()   {
}
