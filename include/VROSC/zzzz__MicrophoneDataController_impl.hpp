#pragma once
// IWYU pragma private; include "VROSC/MicrophoneDataController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__ToolDataController_impl.hpp"
#include "VROSC/zzzz__MicrophoneDataController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__MicrophoneDataController_def.hpp"
#include "VROSC/zzzz__MicrophoneDataModel_def.hpp"
#include "VROSC/zzzz__MicrophoneSettings_def.hpp"
#include "VROSC/zzzz__TransformDataController_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::MicrophoneDataController___c__DisplayClass38_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController___c__DisplayClass38_0::*)()>(&::VROSC::MicrophoneDataController___c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1874420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController___c__DisplayClass38_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController___c__DisplayClass38_0._LoadData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController___c__DisplayClass38_0::*)(::StringW)>(&::VROSC::MicrophoneDataController___c__DisplayClass38_0::_LoadData_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18745f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController___c__DisplayClass38_0*>::get(),
                        "<LoadData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::MicrophoneDataController*& VROSC::MicrophoneDataController___c__DisplayClass38_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::MicrophoneDataController* const& VROSC::MicrophoneDataController___c__DisplayClass38_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::MicrophoneDataController___c__DisplayClass38_0::__cordl_internal_set___4__this(::VROSC::MicrophoneDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::MicrophoneDataController___c__DisplayClass38_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::MicrophoneDataController___c__DisplayClass38_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::MicrophoneDataController___c__DisplayClass38_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::MicrophoneDataController___c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController___c__DisplayClass38_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController___c__DisplayClass38_0::_LoadData_b__0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController___c__DisplayClass38_0*>::get(),
                        "<LoadData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::VROSC::MicrophoneDataController___c__DisplayClass38_0* VROSC::MicrophoneDataController___c__DisplayClass38_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MicrophoneDataController___c__DisplayClass38_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneDataController___c__DisplayClass38_0::MicrophoneDataController___c__DisplayClass38_0()   {
}
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_DataModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MicrophoneDataModel* (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_DataModel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x18738bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_TransformData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransformDataController* (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_TransformData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1873934;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x187393c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_MicrophoneIsAttached
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_MicrophoneIsAttached)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1873b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MicrophoneIsAttached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.set_MicrophoneIsAttached
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(bool)>(&::VROSC::MicrophoneDataController::set_MicrophoneIsAttached)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1873b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "set_MicrophoneIsAttached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_IsOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_IsOpen)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1873b98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.set_IsOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(bool)>(&::VROSC::MicrophoneDataController::set_IsOpen)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1873bbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_HasBeenOpened
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_HasBeenOpened)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1873bfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.set_HasBeenOpened
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(bool)>(&::VROSC::MicrophoneDataController::set_HasBeenOpened)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1873c18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_MicrophonePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_MicrophonePosition)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1873c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MicrophonePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_MicrophoneRotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_MicrophoneRotation)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1873cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MicrophoneRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_MicrophoneScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_MicrophoneScale)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1873d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MicrophoneScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.ApplyDefaults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(::VROSC::WidgetSettings*)>(&::VROSC::MicrophoneDataController::ApplyDefaults)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1873e24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.SetMicrophoneTransformData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::VROSC::MicrophoneDataController::SetMicrophoneTransformData)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x18740e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "SetMicrophoneTransformData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_PreampVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_PreampVolume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1874278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_PreampVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.set_PreampVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(float_t)>(&::VROSC::MicrophoneDataController::set_PreampVolume)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1874040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "set_PreampVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_PreampReverb
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_PreampReverb)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1874294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_PreampReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.set_PreampReverb
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(float_t)>(&::VROSC::MicrophoneDataController::set_PreampReverb)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1874074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "set_PreampReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_MaxVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_MaxVolume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18742b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MaxVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_MaxReverb
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_MaxReverb)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18742cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MaxReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.get_UseProximity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::get_UseProximity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18742e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_UseProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.set_UseProximity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(bool)>(&::VROSC::MicrophoneDataController::set_UseProximity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18740a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "set_UseProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.LoadData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::MicrophoneDataController::LoadData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1874304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.GetMicrophoneSpatialAnchors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::VROSC::MicrophoneDataController::*)()>(&::VROSC::MicrophoneDataController::GetMicrophoneSpatialAnchors)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1874428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "GetMicrophoneSpatialAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.AddMicrophoneSpatialAnchor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(::StringW)>(&::VROSC::MicrophoneDataController::AddMicrophoneSpatialAnchor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1874444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "AddMicrophoneSpatialAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataController.RemoveMicrophoneSpatialAnchor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataController::*)(::StringW)>(&::VROSC::MicrophoneDataController::RemoveMicrophoneSpatialAnchor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x187453c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "RemoveMicrophoneSpatialAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::TransformDataController*& VROSC::MicrophoneDataController::__cordl_internal_get__transformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformData;
}
constexpr ::VROSC::TransformDataController* const& VROSC::MicrophoneDataController::__cordl_internal_get__transformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformData;
}
constexpr void VROSC::MicrophoneDataController::__cordl_internal_set__transformData(::VROSC::TransformDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MicrophoneSettings>& VROSC::MicrophoneDataController::__cordl_internal_get__microphoneDefaultSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDefaultSettings;
}
constexpr ::UnityW<::VROSC::MicrophoneSettings> const& VROSC::MicrophoneDataController::__cordl_internal_get__microphoneDefaultSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDefaultSettings;
}
constexpr void VROSC::MicrophoneDataController::__cordl_internal_set__microphoneDefaultSettings(::UnityW<::VROSC::MicrophoneSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphoneDefaultSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::MicrophoneDataController::setStaticF_OnDataLoaded(::System::Action_1<::VROSC::MicrophoneDataController*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::MicrophoneDataController*>*, "OnDataLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get>(std::forward<::System::Action_1<::VROSC::MicrophoneDataController*>*>(value));
}
inline ::System::Action_1<::VROSC::MicrophoneDataController*>* VROSC::MicrophoneDataController::getStaticF_OnDataLoaded()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::MicrophoneDataController*>*, "OnDataLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get>();
}
inline ::VROSC::MicrophoneDataModel* VROSC::MicrophoneDataController::get_DataModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MicrophoneDataModel*, false>(this, ___internal_method);
}
inline ::VROSC::TransformDataController* VROSC::MicrophoneDataController::get_TransformData()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<::VROSC::TransformDataController*, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::MicrophoneDataController::get_MicrophoneIsAttached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MicrophoneIsAttached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController::set_MicrophoneIsAttached(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "set_MicrophoneIsAttached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::MicrophoneDataController::get_IsOpen()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController::set_IsOpen(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::MicrophoneDataController::get_HasBeenOpened()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController::set_HasBeenOpened(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 VROSC::MicrophoneDataController::get_MicrophonePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MicrophonePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion VROSC::MicrophoneDataController::get_MicrophoneRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MicrophoneRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::MicrophoneDataController::get_MicrophoneScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MicrophoneScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController::ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widgetDefaultSettings);
}
inline void VROSC::MicrophoneDataController::SetMicrophoneTransformData(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "SetMicrophoneTransformData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation, scale);
}
inline float_t VROSC::MicrophoneDataController::get_PreampVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_PreampVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController::set_PreampVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "set_PreampVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::MicrophoneDataController::get_PreampReverb()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_PreampReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController::set_PreampReverb(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "set_PreampReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::MicrophoneDataController::get_MaxVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MaxVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::MicrophoneDataController::get_MaxReverb()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_MaxReverb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool VROSC::MicrophoneDataController::get_UseProximity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "get_UseProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController::set_UseProximity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "set_UseProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::MicrophoneDataController::LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, onSuccess, onFailure);
}
inline ::System::Collections::Generic::List_1<::StringW>* VROSC::MicrophoneDataController::GetMicrophoneSpatialAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "GetMicrophoneSpatialAnchors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataController::AddMicrophoneSpatialAnchor(::StringW  uuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "AddMicrophoneSpatialAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uuid);
}
inline void VROSC::MicrophoneDataController::RemoveMicrophoneSpatialAnchor(::StringW  uuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataController*>::get(),
                        "RemoveMicrophoneSpatialAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uuid);
}
inline ::VROSC::MicrophoneDataController* VROSC::MicrophoneDataController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MicrophoneDataController*>());
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneDataController::MicrophoneDataController()   {
}
