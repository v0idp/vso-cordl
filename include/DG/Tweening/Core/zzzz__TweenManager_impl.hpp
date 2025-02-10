#pragma once
// IWYU pragma private; include "DG/Tweening/Core/TweenManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DG/Tweening/Core/zzzz__TweenManager_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__FilterType_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__OperationType_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__UpdateMode_def.hpp"
#include "DG/Tweening/Core/zzzz__TweenLink_def.hpp"
#include "DG/Tweening/Core/zzzz__TweenManager_def.hpp"
#include "DG/Tweening/Core/zzzz__TweenerCore_3_def.hpp"
#include "DG/Tweening/zzzz__Sequence_def.hpp"
#include "DG/Tweening/zzzz__Tween_def.hpp"
#include "DG/Tweening/zzzz__UpdateType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Core::TweenManager_CapacityIncreaseMode::TweenManager_CapacityIncreaseMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::TweenManager_CapacityIncreaseMode::TweenManager_CapacityIncreaseMode()   {
}
constexpr ::DG::Tweening::Core::TweenManager_CapacityIncreaseMode  DG::Tweening::Core::TweenManager_CapacityIncreaseMode::TweenersAndSequences{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::Core::TweenManager_CapacityIncreaseMode  DG::Tweening::Core::TweenManager_CapacityIncreaseMode::TweenersOnly{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::Core::TweenManager_CapacityIncreaseMode  DG::Tweening::Core::TweenManager_CapacityIncreaseMode::SequencesOnly{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.GetSequence
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)()>(&::DG::Tweening::Core::TweenManager::GetSequence)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x18e6568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "GetSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.SetUpdateType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, ::DG::Tweening::UpdateType, bool)>(&::DG::Tweening::Core::TweenManager::SetUpdateType)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x18e6d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "SetUpdateType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::UpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.AddActiveTweenToSequence
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::AddActiveTweenToSequence)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18e6f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "AddActiveTweenToSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.DespawnAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::DG::Tweening::Core::TweenManager::DespawnAll)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18e7444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "DespawnAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Despawn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, bool)>(&::DG::Tweening::Core::TweenManager::Despawn)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x18e75d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Despawn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.PurgeAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::DG::Tweening::Core::TweenManager::PurgeAll)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x18e7b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "PurgeAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.PurgePools
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::DG::Tweening::Core::TweenManager::PurgePools)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x18e7c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "PurgePools",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.AddTweenLink
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, ::DG::Tweening::Core::TweenLink*)>(&::DG::Tweening::Core::TweenManager::AddTweenLink)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18e7d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "AddTweenLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::TweenLink*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.RemoveTweenLink
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::RemoveTweenLink)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18e7f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "RemoveTweenLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.ResetCapacities
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::DG::Tweening::Core::TweenManager::ResetCapacities)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18e7d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ResetCapacities",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.SetCapacities
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::DG::Tweening::Core::TweenManager::SetCapacities)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18e5578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "SetCapacities",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Validate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::DG::Tweening::Core::TweenManager::Validate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18e8078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Validate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::UpdateType, float_t, float_t)>(&::DG::Tweening::Core::TweenManager::Update)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18e488c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::UpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.FilteredOperation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::DG::Tweening::Core::Enums::OperationType, ::DG::Tweening::Core::Enums::FilterType, ::System::Object*, bool, float_t, ::System::Object*, ::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::DG::Tweening::Core::TweenManager::FilteredOperation)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x18e87bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "FilteredOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::OperationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::FilterType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Complete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*, bool, ::DG::Tweening::Core::Enums::UpdateMode)>(&::DG::Tweening::Core::TweenManager::Complete)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x18e915c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Complete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::UpdateMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Flip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::Flip)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18e9234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Flip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.ForceInit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, bool)>(&::DG::Tweening::Core::TweenManager::ForceInit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18e90ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ForceInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Goto
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*, float_t, bool, ::DG::Tweening::Core::Enums::UpdateMode)>(&::DG::Tweening::Core::TweenManager::Goto)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x18e925c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Goto",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::UpdateMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Pause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::Pause)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x18e7f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Pause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Play
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::Play)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18e7ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.PlayBackwards
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::PlayBackwards)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x18e9398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "PlayBackwards",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.PlayForward
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::PlayForward)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18e9470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "PlayForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Restart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*, bool, float_t)>(&::DG::Tweening::Core::TweenManager::Restart)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x18e9520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Restart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.Rewind
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*, bool)>(&::DG::Tweening::Core::TweenManager::Rewind)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18e95e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Rewind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.SmoothRewind
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::SmoothRewind)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x18e9708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "SmoothRewind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.TogglePause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::TogglePause)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18e9804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "TogglePause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.TotalPooledTweens
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::DG::Tweening::Core::TweenManager::TotalPooledTweens)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x18e9914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "TotalPooledTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.TotalPlayingTweens
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::DG::Tweening::Core::TweenManager::TotalPlayingTweens)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x18e9970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "TotalPlayingTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.GetActiveTweens
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* (*)(bool, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*)>(&::DG::Tweening::Core::TweenManager::GetActiveTweens)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18e9a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "GetActiveTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.GetTweensById
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* (*)(::System::Object*, bool, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*)>(&::DG::Tweening::Core::TweenManager::GetTweensById)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18e9c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "GetTweensById",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.GetTweensByTarget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* (*)(::System::Object*, bool, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*)>(&::DG::Tweening::Core::TweenManager::GetTweensByTarget)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x18e9f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "GetTweensByTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.MarkForKilling
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::MarkForKilling)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18e83f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "MarkForKilling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.EvaluateTweenLink
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::EvaluateTweenLink)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18e857c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "EvaluateTweenLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.AddActiveTween
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::AddActiveTween)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x18e684c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "AddActiveTween",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.ReorganizeActiveTweens
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::DG::Tweening::Core::TweenManager::ReorganizeActiveTweens)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x18e81f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ReorganizeActiveTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.DespawnActiveTweens
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*)>(&::DG::Tweening::Core::TweenManager::DespawnActiveTweens)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x18e84c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "DespawnActiveTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.RemoveActiveTween
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&::DG::Tweening::Core::TweenManager::RemoveActiveTween)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x18e6fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "RemoveActiveTween",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.ClearTweenArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>)>(&::DG::Tweening::Core::TweenManager::ClearTweenArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x18e7aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ClearTweenArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.IncreaseCapacities
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Core::TweenManager_CapacityIncreaseMode)>(&::DG::Tweening::Core::TweenManager::IncreaseCapacities)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x18e6b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "IncreaseCapacities",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::TweenManager_CapacityIncreaseMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::TweenManager.ManageOnRewindCallbackWhenAlreadyRewinded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, bool)>(&::DG::Tweening::Core::TweenManager::ManageOnRewindCallbackWhenAlreadyRewinded)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18e9874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ManageOnRewindCallbackWhenAlreadyRewinded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline void DG::Tweening::Core::TweenManager::setStaticF_isUnityEditor(bool  value)  {
::cordl_internals::setStaticField<bool, "isUnityEditor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF_isUnityEditor()  {
return ::cordl_internals::getStaticField<bool, "isUnityEditor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_isDebugBuild(bool  value)  {
::cordl_internals::setStaticField<bool, "isDebugBuild", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF_isDebugBuild()  {
return ::cordl_internals::getStaticField<bool, "isDebugBuild", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_maxActive(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxActive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_maxActive()  {
return ::cordl_internals::getStaticField<int32_t, "maxActive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_maxTweeners(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_maxTweeners()  {
return ::cordl_internals::getStaticField<int32_t, "maxTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_maxSequences(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_maxSequences()  {
return ::cordl_internals::getStaticField<int32_t, "maxSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_hasActiveTweens(bool  value)  {
::cordl_internals::setStaticField<bool, "hasActiveTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF_hasActiveTweens()  {
return ::cordl_internals::getStaticField<bool, "hasActiveTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_hasActiveDefaultTweens(bool  value)  {
::cordl_internals::setStaticField<bool, "hasActiveDefaultTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF_hasActiveDefaultTweens()  {
return ::cordl_internals::getStaticField<bool, "hasActiveDefaultTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_hasActiveLateTweens(bool  value)  {
::cordl_internals::setStaticField<bool, "hasActiveLateTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF_hasActiveLateTweens()  {
return ::cordl_internals::getStaticField<bool, "hasActiveLateTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_hasActiveFixedTweens(bool  value)  {
::cordl_internals::setStaticField<bool, "hasActiveFixedTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF_hasActiveFixedTweens()  {
return ::cordl_internals::getStaticField<bool, "hasActiveFixedTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_hasActiveManualTweens(bool  value)  {
::cordl_internals::setStaticField<bool, "hasActiveManualTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF_hasActiveManualTweens()  {
return ::cordl_internals::getStaticField<bool, "hasActiveManualTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totActiveTweens(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totActiveTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totActiveTweens()  {
return ::cordl_internals::getStaticField<int32_t, "totActiveTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totActiveDefaultTweens(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totActiveDefaultTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totActiveDefaultTweens()  {
return ::cordl_internals::getStaticField<int32_t, "totActiveDefaultTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totActiveLateTweens(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totActiveLateTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totActiveLateTweens()  {
return ::cordl_internals::getStaticField<int32_t, "totActiveLateTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totActiveFixedTweens(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totActiveFixedTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totActiveFixedTweens()  {
return ::cordl_internals::getStaticField<int32_t, "totActiveFixedTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totActiveManualTweens(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totActiveManualTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totActiveManualTweens()  {
return ::cordl_internals::getStaticField<int32_t, "totActiveManualTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totActiveTweeners(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totActiveTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totActiveTweeners()  {
return ::cordl_internals::getStaticField<int32_t, "totActiveTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totActiveSequences(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totActiveSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totActiveSequences()  {
return ::cordl_internals::getStaticField<int32_t, "totActiveSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totPooledTweeners(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totPooledTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totPooledTweeners()  {
return ::cordl_internals::getStaticField<int32_t, "totPooledTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totPooledSequences(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totPooledSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totPooledSequences()  {
return ::cordl_internals::getStaticField<int32_t, "totPooledSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totTweeners(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totTweeners()  {
return ::cordl_internals::getStaticField<int32_t, "totTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_totSequences(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "totSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF_totSequences()  {
return ::cordl_internals::getStaticField<int32_t, "totSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF_isUpdateLoop(bool  value)  {
::cordl_internals::setStaticField<bool, "isUpdateLoop", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF_isUpdateLoop()  {
return ::cordl_internals::getStaticField<bool, "isUpdateLoop", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__activeTweens(::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>, "_activeTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>>(value));
}
inline ::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*> DG::Tweening::Core::TweenManager::getStaticF__activeTweens()  {
return ::cordl_internals::getStaticField<::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>, "_activeTweens", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__pooledTweeners(::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>, "_pooledTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>>(value));
}
inline ::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*> DG::Tweening::Core::TweenManager::getStaticF__pooledTweeners()  {
return ::cordl_internals::getStaticField<::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>, "_pooledTweeners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__PooledSequences(::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>*, "_PooledSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>*>(value));
}
inline ::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>* DG::Tweening::Core::TweenManager::getStaticF__PooledSequences()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<::DG::Tweening::Tween*>*, "_PooledSequences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__KillList(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*, "_KillList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*>(value));
}
inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* DG::Tweening::Core::TweenManager::getStaticF__KillList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*, "_KillList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__TweenLinks(::System::Collections::Generic::Dictionary_2<::DG::Tweening::Tween*,::DG::Tweening::Core::TweenLink*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::DG::Tweening::Tween*,::DG::Tweening::Core::TweenLink*>*, "_TweenLinks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::DG::Tweening::Tween*,::DG::Tweening::Core::TweenLink*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::DG::Tweening::Tween*,::DG::Tweening::Core::TweenLink*>* DG::Tweening::Core::TweenManager::getStaticF__TweenLinks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::DG::Tweening::Tween*,::DG::Tweening::Core::TweenLink*>*, "_TweenLinks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__totTweenLinks(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_totTweenLinks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF__totTweenLinks()  {
return ::cordl_internals::getStaticField<int32_t, "_totTweenLinks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__maxActiveLookupId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_maxActiveLookupId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF__maxActiveLookupId()  {
return ::cordl_internals::getStaticField<int32_t, "_maxActiveLookupId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__requiresActiveReorganization(bool  value)  {
::cordl_internals::setStaticField<bool, "_requiresActiveReorganization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF__requiresActiveReorganization()  {
return ::cordl_internals::getStaticField<bool, "_requiresActiveReorganization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__reorganizeFromId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_reorganizeFromId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF__reorganizeFromId()  {
return ::cordl_internals::getStaticField<int32_t, "_reorganizeFromId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__minPooledTweenerId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_minPooledTweenerId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF__minPooledTweenerId()  {
return ::cordl_internals::getStaticField<int32_t, "_minPooledTweenerId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__maxPooledTweenerId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_maxPooledTweenerId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t DG::Tweening::Core::TweenManager::getStaticF__maxPooledTweenerId()  {
return ::cordl_internals::getStaticField<int32_t, "_maxPooledTweenerId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
inline void DG::Tweening::Core::TweenManager::setStaticF__despawnAllCalledFromUpdateLoopCallback(bool  value)  {
::cordl_internals::setStaticField<bool, "_despawnAllCalledFromUpdateLoopCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>(std::forward<bool>(value));
}
inline bool DG::Tweening::Core::TweenManager::getStaticF__despawnAllCalledFromUpdateLoopCallback()  {
return ::cordl_internals::getStaticField<bool, "_despawnAllCalledFromUpdateLoopCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get>();
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DG::Tweening::Core::TweenManager::GetTweener()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                    "GetTweener",
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*, false>(nullptr, ___internal_method);
}
inline ::DG::Tweening::Sequence* DG::Tweening::Core::TweenManager::GetSequence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "GetSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Sequence*, false>(nullptr, ___internal_method);
}
inline void DG::Tweening::Core::TweenManager::SetUpdateType(::DG::Tweening::Tween*  t, ::DG::Tweening::UpdateType  updateType, bool  isIndependentUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "SetUpdateType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::UpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, updateType, isIndependentUpdate);
}
inline void DG::Tweening::Core::TweenManager::AddActiveTweenToSequence(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "AddActiveTweenToSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline int32_t DG::Tweening::Core::TweenManager::DespawnAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "DespawnAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void DG::Tweening::Core::TweenManager::Despawn(::DG::Tweening::Tween*  t, bool  modifyActiveLists)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Despawn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, modifyActiveLists);
}
inline void DG::Tweening::Core::TweenManager::PurgeAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "PurgeAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void DG::Tweening::Core::TweenManager::PurgePools()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "PurgePools",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void DG::Tweening::Core::TweenManager::AddTweenLink(::DG::Tweening::Tween*  t, ::DG::Tweening::Core::TweenLink*  tweenLink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "AddTweenLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::TweenLink*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, tweenLink);
}
inline void DG::Tweening::Core::TweenManager::RemoveTweenLink(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "RemoveTweenLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline void DG::Tweening::Core::TweenManager::ResetCapacities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ResetCapacities",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void DG::Tweening::Core::TweenManager::SetCapacities(int32_t  tweenersCapacity, int32_t  sequencesCapacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "SetCapacities",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tweenersCapacity, sequencesCapacity);
}
inline int32_t DG::Tweening::Core::TweenManager::Validate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Validate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void DG::Tweening::Core::TweenManager::Update(::DG::Tweening::UpdateType  updateType, float_t  deltaTime, float_t  independentTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::UpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType, deltaTime, independentTime);
}
inline int32_t DG::Tweening::Core::TweenManager::FilteredOperation(::DG::Tweening::Core::Enums::OperationType  operationType, ::DG::Tweening::Core::Enums::FilterType  filterType, ::System::Object*  id, bool  optionalBool, float_t  optionalFloat, ::System::Object*  optionalObj, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  optionalArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "FilteredOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::OperationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::FilterType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, operationType, filterType, id, optionalBool, optionalFloat, optionalObj, optionalArray);
}
inline bool DG::Tweening::Core::TweenManager::Complete(::DG::Tweening::Tween*  t, bool  modifyActiveLists, ::DG::Tweening::Core::Enums::UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Complete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::UpdateMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t, modifyActiveLists, updateMode);
}
inline bool DG::Tweening::Core::TweenManager::Flip(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Flip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline void DG::Tweening::Core::TweenManager::ForceInit(::DG::Tweening::Tween*  t, bool  isSequenced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ForceInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, isSequenced);
}
inline bool DG::Tweening::Core::TweenManager::Goto(::DG::Tweening::Tween*  t, float_t  to, bool  andPlay, ::DG::Tweening::Core::Enums::UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Goto",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::UpdateMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t, to, andPlay, updateMode);
}
inline bool DG::Tweening::Core::TweenManager::Pause(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Pause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline bool DG::Tweening::Core::TweenManager::Play(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline bool DG::Tweening::Core::TweenManager::PlayBackwards(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "PlayBackwards",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline bool DG::Tweening::Core::TweenManager::PlayForward(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "PlayForward",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline bool DG::Tweening::Core::TweenManager::Restart(::DG::Tweening::Tween*  t, bool  includeDelay, float_t  changeDelayTo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Restart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t, includeDelay, changeDelayTo);
}
inline bool DG::Tweening::Core::TweenManager::Rewind(::DG::Tweening::Tween*  t, bool  includeDelay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "Rewind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t, includeDelay);
}
inline bool DG::Tweening::Core::TweenManager::SmoothRewind(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "SmoothRewind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline bool DG::Tweening::Core::TweenManager::TogglePause(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "TogglePause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
inline int32_t DG::Tweening::Core::TweenManager::TotalPooledTweens()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "TotalPooledTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t DG::Tweening::Core::TweenManager::TotalPlayingTweens()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "TotalPlayingTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* DG::Tweening::Core::TweenManager::GetActiveTweens(bool  playing, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "GetActiveTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*, false>(nullptr, ___internal_method, playing, fillableList);
}
inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* DG::Tweening::Core::TweenManager::GetTweensById(::System::Object*  id, bool  playingOnly, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "GetTweensById",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*, false>(nullptr, ___internal_method, id, playingOnly, fillableList);
}
inline ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* DG::Tweening::Core::TweenManager::GetTweensByTarget(::System::Object*  target, bool  playingOnly, ::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  fillableList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "GetTweensByTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*, false>(nullptr, ___internal_method, target, playingOnly, fillableList);
}
inline void DG::Tweening::Core::TweenManager::MarkForKilling(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "MarkForKilling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline void DG::Tweening::Core::TweenManager::EvaluateTweenLink(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "EvaluateTweenLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline void DG::Tweening::Core::TweenManager::AddActiveTween(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "AddActiveTween",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline void DG::Tweening::Core::TweenManager::ReorganizeActiveTweens()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ReorganizeActiveTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void DG::Tweening::Core::TweenManager::DespawnActiveTweens(::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*  tweens)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "DespawnActiveTweens",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tweens);
}
inline void DG::Tweening::Core::TweenManager::RemoveActiveTween(::DG::Tweening::Tween*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "RemoveActiveTween",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline void DG::Tweening::Core::TweenManager::ClearTweenArray(::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>  tweens)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ClearTweenArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::DG::Tweening::Tween*,::Array<::DG::Tweening::Tween*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tweens);
}
inline void DG::Tweening::Core::TweenManager::IncreaseCapacities(::DG::Tweening::Core::TweenManager_CapacityIncreaseMode  increaseMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "IncreaseCapacities",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::TweenManager_CapacityIncreaseMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, increaseMode);
}
inline void DG::Tweening::Core::TweenManager::ManageOnRewindCallbackWhenAlreadyRewinded(::DG::Tweening::Tween*  t, bool  isPlayBackwardsOrSmoothRewind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenManager*>::get(),
                        "ManageOnRewindCallbackWhenAlreadyRewinded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Tween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, isPlayBackwardsOrSmoothRewind);
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::TweenManager::TweenManager()   {
}
