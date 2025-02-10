#pragma once
// IWYU pragma private; include "VROSC/Microphone.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__IAnchoredObject_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__Microphone_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__MicrophoneController_def.hpp"
#include "VROSC/zzzz__MicrophoneDataController_def.hpp"
#include "VROSC/zzzz__Microphone_def.hpp"
#include "VROSC/zzzz__ResetableMover_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
#include "VROSC/zzzz__TransformMover_def.hpp"
//  Writing Method size for method: ::VROSC::Microphone___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone___c__DisplayClass19_0::*)()>(&::VROSC::Microphone___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1723b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone___c__DisplayClass19_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone___c__DisplayClass19_0._SetToData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone___c__DisplayClass19_0::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::VROSC::Microphone___c__DisplayClass19_0::_SetToData_b__0)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x1723e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone___c__DisplayClass19_0*>::get(),
                        "<SetToData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone___c__DisplayClass19_0._SetToData_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone___c__DisplayClass19_0::*)(::VROSC::Error)>(&::VROSC::Microphone___c__DisplayClass19_0::_SetToData_b__1)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1724124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone___c__DisplayClass19_0*>::get(),
                        "<SetToData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::Microphone>& VROSC::Microphone___c__DisplayClass19_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::Microphone> const& VROSC::Microphone___c__DisplayClass19_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::Microphone___c__DisplayClass19_0::__cordl_internal_set___4__this(::UnityW<::VROSC::Microphone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MicrophoneDataController*& VROSC::Microphone___c__DisplayClass19_0::__cordl_internal_get_dataController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataController;
}
constexpr ::VROSC::MicrophoneDataController* const& VROSC::Microphone___c__DisplayClass19_0::__cordl_internal_get_dataController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataController;
}
constexpr void VROSC::Microphone___c__DisplayClass19_0::__cordl_internal_set_dataController(::VROSC::MicrophoneDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dataController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::Microphone___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone___c__DisplayClass19_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Microphone___c__DisplayClass19_0::_SetToData_b__0(bool  success, ::UnityEngine::Vector3  anchorPosition, ::UnityEngine::Quaternion  anchorRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone___c__DisplayClass19_0*>::get(),
                        "<SetToData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, anchorPosition, anchorRotation);
}
inline void VROSC::Microphone___c__DisplayClass19_0::_SetToData_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone___c__DisplayClass19_0*>::get(),
                        "<SetToData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::Microphone___c__DisplayClass19_0* VROSC::Microphone___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Microphone___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::Microphone___c__DisplayClass19_0::Microphone___c__DisplayClass19_0()   {
}
//  Writing Method size for method: ::VROSC::Microphone.get_TransformMover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::TransformMover> (::VROSC::Microphone::*)()>(&::VROSC::Microphone::get_TransformMover)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x172324c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "get_TransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)()>(&::VROSC::Microphone::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1723268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)()>(&::VROSC::Microphone::OnDestroy)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x17233cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::VROSC::MicrophoneController*)>(&::VROSC::Microphone::Setup)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x172360c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MicrophoneController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)()>(&::VROSC::Microphone::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17238c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)()>(&::VROSC::Microphone::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17238f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)()>(&::VROSC::Microphone::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x172397c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::VROSC::Signal*)>(&::VROSC::Microphone::NodeBegin)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1723b1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::VROSC::Signal*)>(&::VROSC::Microphone::NodeStay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1723b3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::VROSC::Signal*)>(&::VROSC::Microphone::NodeEnd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1723b40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.CalculateProximity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)()>(&::VROSC::Microphone::CalculateProximity)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1723980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "CalculateProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.SetPeakLightActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(bool)>(&::VROSC::Microphone::SetPeakLightActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x172395c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "SetPeakLightActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.SetToData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::VROSC::MicrophoneDataController*)>(&::VROSC::Microphone::SetToData)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1723744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "SetToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MicrophoneDataController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.MicrophoneReset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::VROSC::ResetableMover*)>(&::VROSC::Microphone::MicrophoneReset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1723b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "MicrophoneReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ResetableMover*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.MicrophoneMoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::VROSC::ResetableMover*)>(&::VROSC::Microphone::MicrophoneMoved)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1723bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "MicrophoneMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ResetableMover*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.MicrophoneStationMoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::VROSC::TransformMover*)>(&::VROSC::Microphone::MicrophoneStationMoved)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1723ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "MicrophoneStationMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformMover*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.AddSpatialAnchorToData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::StringW)>(&::VROSC::Microphone::AddSpatialAnchorToData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1723d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "AddSpatialAnchorToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone.RemoveSpatialAnchorFromData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)(::StringW)>(&::VROSC::Microphone::RemoveSpatialAnchorFromData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1723db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "RemoveSpatialAnchorFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Microphone._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Microphone::*)()>(&::VROSC::Microphone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1723e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::Microphone::__cordl_internal_get__microphoneHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::Microphone::__cordl_internal_get__microphoneHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneHead;
}
constexpr void VROSC::Microphone::__cordl_internal_set__microphoneHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphoneHead)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::Microphone::__cordl_internal_get__peakLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakLight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::Microphone::__cordl_internal_get__peakLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakLight;
}
constexpr void VROSC::Microphone::__cordl_internal_set__peakLight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____peakLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::Microphone::__cordl_internal_get__falloffCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____falloffCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::Microphone::__cordl_internal_get__falloffCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____falloffCurve;
}
constexpr void VROSC::Microphone::__cordl_internal_set__falloffCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____falloffCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ResetableMover>& VROSC::Microphone::__cordl_internal_get__resetableMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetableMover;
}
constexpr ::UnityW<::VROSC::ResetableMover> const& VROSC::Microphone::__cordl_internal_get__resetableMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetableMover;
}
constexpr void VROSC::Microphone::__cordl_internal_set__resetableMover(::UnityW<::VROSC::ResetableMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resetableMover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MicrophoneController>& VROSC::Microphone::__cordl_internal_get__microphoneController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneController;
}
constexpr ::UnityW<::VROSC::MicrophoneController> const& VROSC::Microphone::__cordl_internal_get__microphoneController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneController;
}
constexpr void VROSC::Microphone::__cordl_internal_set__microphoneController(::UnityW<::VROSC::MicrophoneController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphoneController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::Microphone::__cordl_internal_get__maxMicrophoneDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxMicrophoneDistance;
}
constexpr float_t const& VROSC::Microphone::__cordl_internal_get__maxMicrophoneDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxMicrophoneDistance;
}
constexpr void VROSC::Microphone::__cordl_internal_set__maxMicrophoneDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxMicrophoneDistance = value;
}
inline ::UnityW<::VROSC::TransformMover> VROSC::Microphone::get_TransformMover()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "get_TransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::TransformMover>, false>(this, ___internal_method);
}
inline void VROSC::Microphone::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Microphone::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Microphone::Setup(::VROSC::MicrophoneController*  microphoneController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MicrophoneController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, microphoneController);
}
inline void VROSC::Microphone::OnEnable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Microphone::OnDisable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Microphone::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Microphone::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::Microphone::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::Microphone::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::Microphone::CalculateProximity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "CalculateProximity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Microphone::SetPeakLightActive(bool  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "SetPeakLightActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::Microphone::SetToData(::VROSC::MicrophoneDataController*  dataController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "SetToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MicrophoneDataController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataController);
}
inline void VROSC::Microphone::MicrophoneReset(::VROSC::ResetableMover*  mover)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "MicrophoneReset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ResetableMover*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void VROSC::Microphone::MicrophoneMoved(::VROSC::ResetableMover*  mover)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "MicrophoneMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ResetableMover*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void VROSC::Microphone::MicrophoneStationMoved(::VROSC::TransformMover*  mover)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "MicrophoneStationMoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformMover*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void VROSC::Microphone::AddSpatialAnchorToData(::StringW  anchorUuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "AddSpatialAnchorToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}
inline void VROSC::Microphone::RemoveSpatialAnchorFromData(::StringW  anchorUuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        "RemoveSpatialAnchorFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}
inline void VROSC::Microphone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Microphone*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Microphone* VROSC::Microphone::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Microphone*>());
}
/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr  VROSC::Microphone::operator ::VROSC::IAnchoredObject*() noexcept {
return static_cast<::VROSC::IAnchoredObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* VROSC::Microphone::i___VROSC__IAnchoredObject() noexcept {
return static_cast<::VROSC::IAnchoredObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::Microphone::Microphone()   {
}
