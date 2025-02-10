#pragma once
// IWYU pragma private; include "VROSC/InstrumentsDataController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__BaseDataController_impl.hpp"
#include "VROSC/zzzz__WidgetSettings_impl.hpp"
#include "VROSC/zzzz__InstrumentsDataController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InstrumentsDataController_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::InstrumentsDataController_PatchSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController_PatchSettings::*)()>(&::VROSC::InstrumentsDataController_PatchSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183e164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController_PatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::WidgetSettings_Identifier& VROSC::InstrumentsDataController_PatchSettings::__cordl_internal_get_InstrumentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentId;
}
constexpr ::VROSC::WidgetSettings_Identifier const& VROSC::InstrumentsDataController_PatchSettings::__cordl_internal_get_InstrumentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentId;
}
constexpr void VROSC::InstrumentsDataController_PatchSettings::__cordl_internal_set_InstrumentId(::VROSC::WidgetSettings_Identifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstrumentId = value;
}
constexpr ::System::Object*& VROSC::InstrumentsDataController_PatchSettings::__cordl_internal_get_Patch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Patch;
}
constexpr ::System::Object* const& VROSC::InstrumentsDataController_PatchSettings::__cordl_internal_get_Patch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Patch;
}
constexpr void VROSC::InstrumentsDataController_PatchSettings::__cordl_internal_set_Patch(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Patch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::InstrumentsDataController_PatchSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController_PatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InstrumentsDataController_PatchSettings* VROSC::InstrumentsDataController_PatchSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentsDataController_PatchSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentsDataController_PatchSettings::InstrumentsDataController_PatchSettings()   {
}
//  Writing Method size for method: ::VROSC::InstrumentsDataController.ApplyDefaults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings*)>(&::VROSC::InstrumentsDataController::ApplyDefaults)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.IsOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::InstrumentsDataController::IsOpen)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.GetPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::InstrumentsDataController::GetPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.GetRotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::InstrumentsDataController::GetRotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.GetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::InstrumentsDataController::GetScale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.SetOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier, bool)>(&::VROSC::InstrumentsDataController::SetOpen)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.SetPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier, ::UnityEngine::Vector3)>(&::VROSC::InstrumentsDataController::SetPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.SetRotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier, ::UnityEngine::Quaternion)>(&::VROSC::InstrumentsDataController::SetRotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.SetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier, ::UnityEngine::Vector3)>(&::VROSC::InstrumentsDataController::SetScale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.SetQuantize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier, bool)>(&::VROSC::InstrumentsDataController::SetQuantize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.SetQuantizeTolerance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier, float_t)>(&::VROSC::InstrumentsDataController::SetQuantizeTolerance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.SetQuantizeBeatDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t)>(&::VROSC::InstrumentsDataController::SetQuantizeBeatDivision)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.GetQuantize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::InstrumentsDataController::GetQuantize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.GetQuantizeTolerance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::InstrumentsDataController::GetQuantizeTolerance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController.GetQuantizeBeatDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::InstrumentsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::InstrumentsDataController::GetQuantizeBeatDivision)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentsDataController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentsDataController::*)()>(&::VROSC::InstrumentsDataController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183e15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::InstrumentsDataController::ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widgetDefaultSettings);
}
inline bool VROSC::InstrumentsDataController::IsOpen(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
inline ::UnityEngine::Vector3 VROSC::InstrumentsDataController::GetPosition(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, id);
}
inline ::UnityEngine::Quaternion VROSC::InstrumentsDataController::GetRotation(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, id);
}
inline ::UnityEngine::Vector3 VROSC::InstrumentsDataController::GetScale(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, id);
}
inline void VROSC::InstrumentsDataController::SetOpen(::VROSC::WidgetSettings_Identifier  id, bool  isOpen)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, isOpen);
}
inline void VROSC::InstrumentsDataController::SetPosition(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Vector3  position)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, position);
}
inline void VROSC::InstrumentsDataController::SetRotation(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Quaternion  rotation)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, rotation);
}
inline void VROSC::InstrumentsDataController::SetScale(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Vector3  scale)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, scale);
}
inline void VROSC::InstrumentsDataController::SetQuantize(::VROSC::WidgetSettings_Identifier  id, bool  quantize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, quantize);
}
inline void VROSC::InstrumentsDataController::SetQuantizeTolerance(::VROSC::WidgetSettings_Identifier  id, float_t  tolerance)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, tolerance);
}
inline void VROSC::InstrumentsDataController::SetQuantizeBeatDivision(::VROSC::WidgetSettings_Identifier  id, int32_t  division)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, division);
}
inline bool VROSC::InstrumentsDataController::GetQuantize(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
inline float_t VROSC::InstrumentsDataController::GetQuantizeTolerance(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, id);
}
inline int32_t VROSC::InstrumentsDataController::GetQuantizeBeatDivision(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                    30
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id);
}
inline void VROSC::InstrumentsDataController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentsDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::InstrumentsDataController* VROSC::InstrumentsDataController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentsDataController*>());
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentsDataController::InstrumentsDataController()   {
}
