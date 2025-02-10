#pragma once
// IWYU pragma private; include "VROSC/InstrumentHub.hpp"
#include "VROSC/zzzz__WidgetHub_impl.hpp"
#include "VROSC/zzzz__InstrumentHub_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__WidgetController_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::InstrumentHub.get_InstrumentSizeMultiplier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::InstrumentHub::*)()>(&::VROSC::InstrumentHub::get_InstrumentSizeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x178fa38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                        "get_InstrumentSizeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentHub.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentHub::*)()>(&::VROSC::InstrumentHub::Setup)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x178fa40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentHub.PlaceWidget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentHub::*)(::VROSC::WidgetController*, ::VROSC::InputDevice*, ::UnityEngine::Vector3, bool, bool)>(&::VROSC::InstrumentHub::PlaceWidget)> {
  constexpr static std::size_t size = 0x9e4;
  constexpr static std::size_t addrs = 0x178ff88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentHub.GetInstrumentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::InstrumentHub::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::InstrumentHub::GetInstrumentName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x179096c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                        "GetInstrumentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentHub._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentHub::*)()>(&::VROSC::InstrumentHub::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1790a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::InstrumentHub::__cordl_internal_get__spawnDistanceFromBoard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnDistanceFromBoard;
}
constexpr float_t const& VROSC::InstrumentHub::__cordl_internal_get__spawnDistanceFromBoard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnDistanceFromBoard;
}
constexpr void VROSC::InstrumentHub::__cordl_internal_set__spawnDistanceFromBoard(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnDistanceFromBoard = value;
}
constexpr float_t& VROSC::InstrumentHub::__cordl_internal_get__spawnDistanceFromController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnDistanceFromController;
}
constexpr float_t const& VROSC::InstrumentHub::__cordl_internal_get__spawnDistanceFromController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnDistanceFromController;
}
constexpr void VROSC::InstrumentHub::__cordl_internal_set__spawnDistanceFromController(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnDistanceFromController = value;
}
constexpr float_t& VROSC::InstrumentHub::__cordl_internal_get__instrumentSizeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentSizeMultiplier;
}
constexpr float_t const& VROSC::InstrumentHub::__cordl_internal_get__instrumentSizeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentSizeMultiplier;
}
constexpr void VROSC::InstrumentHub::__cordl_internal_set__instrumentSizeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instrumentSizeMultiplier = value;
}
constexpr float_t& VROSC::InstrumentHub::__cordl_internal_get__gripSpawnHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripSpawnHeightOffset;
}
constexpr float_t const& VROSC::InstrumentHub::__cordl_internal_get__gripSpawnHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripSpawnHeightOffset;
}
constexpr void VROSC::InstrumentHub::__cordl_internal_set__gripSpawnHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripSpawnHeightOffset = value;
}
inline float_t VROSC::InstrumentHub::get_InstrumentSizeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                        "get_InstrumentSizeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::InstrumentHub::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InstrumentHub::PlaceWidget(::VROSC::WidgetController*  target, ::VROSC::InputDevice*  device, ::UnityEngine::Vector3  pressPos, bool  gripping, bool  userHasOpenedBefore)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, device, pressPos, gripping, userHasOpenedBefore);
}
inline ::StringW VROSC::InstrumentHub::GetInstrumentName(::VROSC::WidgetSettings_Identifier  instrumentId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                        "GetInstrumentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, instrumentId);
}
inline void VROSC::InstrumentHub::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentHub*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InstrumentHub* VROSC::InstrumentHub::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentHub*>());
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentHub::InstrumentHub()   {
}
