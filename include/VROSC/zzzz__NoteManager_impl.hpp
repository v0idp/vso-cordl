#pragma once
// IWYU pragma private; include "VROSC/NoteManager.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__NoteManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__ExternalSynthesizer_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__InstrumentEvent_def.hpp"
#include "VROSC/zzzz__InternalSynthesizer_def.hpp"
#include "VROSC/zzzz__NoteManager_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::NoteManager_ActiveNote._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager_ActiveNote::*)(int32_t, ::System::Object*, ::VROSC::HandType, int32_t, ::System::Object*)>(&::VROSC::NoteManager_ActiveNote::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x16ef464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager_ActiveNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::NoteManager_ActiveNote::__cordl_internal_get_Note()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Note;
}
constexpr int32_t const& VROSC::NoteManager_ActiveNote::__cordl_internal_get_Note() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Note;
}
constexpr void VROSC::NoteManager_ActiveNote::__cordl_internal_set_Note(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Note = value;
}
constexpr ::System::Object*& VROSC::NoteManager_ActiveNote::__cordl_internal_get_Patch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Patch;
}
constexpr ::System::Object* const& VROSC::NoteManager_ActiveNote::__cordl_internal_get_Patch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Patch;
}
constexpr void VROSC::NoteManager_ActiveNote::__cordl_internal_set_Patch(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Patch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::HandType& VROSC::NoteManager_ActiveNote::__cordl_internal_get_HandType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandType;
}
constexpr ::VROSC::HandType const& VROSC::NoteManager_ActiveNote::__cordl_internal_get_HandType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandType;
}
constexpr void VROSC::NoteManager_ActiveNote::__cordl_internal_set_HandType(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandType = value;
}
constexpr int32_t& VROSC::NoteManager_ActiveNote::__cordl_internal_get_Channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Channel;
}
constexpr int32_t const& VROSC::NoteManager_ActiveNote::__cordl_internal_get_Channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Channel;
}
constexpr void VROSC::NoteManager_ActiveNote::__cordl_internal_set_Channel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Channel = value;
}
constexpr ::System::Object*& VROSC::NoteManager_ActiveNote::__cordl_internal_get_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr ::System::Object* const& VROSC::NoteManager_ActiveNote::__cordl_internal_get_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr void VROSC::NoteManager_ActiveNote::__cordl_internal_set_Source(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::NoteManager_ActiveNote::_ctor(int32_t  note, ::System::Object*  patch, ::VROSC::HandType  handType, int32_t  channel, ::System::Object*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager_ActiveNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, patch, handType, channel, source);
}
inline ::VROSC::NoteManager_ActiveNote* VROSC::NoteManager_ActiveNote::New_ctor(int32_t  note, ::System::Object*  patch, ::VROSC::HandType  handType, int32_t  channel, ::System::Object*  source)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteManager_ActiveNote*>(note, patch, handType, channel, source));
}
// Ctor Parameters []
constexpr ::VROSC::NoteManager_ActiveNote::NoteManager_ActiveNote()   {
}
//  Writing Method size for method: ::VROSC::NoteManager___c__DisplayClass25_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager___c__DisplayClass25_0::*)()>(&::VROSC::NoteManager___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16efb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager___c__DisplayClass25_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager___c__DisplayClass25_0._AllNotesOff_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::NoteManager___c__DisplayClass25_0::*)(::VROSC::NoteManager_ActiveNote*)>(&::VROSC::NoteManager___c__DisplayClass25_0::_AllNotesOff_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x16efca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager___c__DisplayClass25_0*>::get(),
                        "<AllNotesOff>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteManager_ActiveNote*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& VROSC::NoteManager___c__DisplayClass25_0::__cordl_internal_get_patch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patch;
}
constexpr ::System::Object* const& VROSC::NoteManager___c__DisplayClass25_0::__cordl_internal_get_patch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patch;
}
constexpr void VROSC::NoteManager___c__DisplayClass25_0::__cordl_internal_set_patch(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___patch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::NoteManager___c__DisplayClass25_0::__cordl_internal_get_channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr int32_t const& VROSC::NoteManager___c__DisplayClass25_0::__cordl_internal_get_channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr void VROSC::NoteManager___c__DisplayClass25_0::__cordl_internal_set_channel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channel = value;
}
inline void VROSC::NoteManager___c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager___c__DisplayClass25_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::NoteManager___c__DisplayClass25_0::_AllNotesOff_b__0(::VROSC::NoteManager_ActiveNote*  a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager___c__DisplayClass25_0*>::get(),
                        "<AllNotesOff>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::NoteManager_ActiveNote*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a);
}
inline ::VROSC::NoteManager___c__DisplayClass25_0* VROSC::NoteManager___c__DisplayClass25_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteManager___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteManager___c__DisplayClass25_0::NoteManager___c__DisplayClass25_0()   {
}
//  Writing Method size for method: ::VROSC::NoteManager__Setup_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager__Setup_d__16::*)()>(&::VROSC::NoteManager__Setup_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x16efce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager__Setup_d__16>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager__Setup_d__16.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager__Setup_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::NoteManager__Setup_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16efe84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager__Setup_d__16>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::NoteManager__Setup_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager__Setup_d__16>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteManager__Setup_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager__Setup_d__16>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::NoteManager__Setup_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::NoteManager__Setup_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::NoteManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NoteManager__Setup_d__16::NoteManager__Setup_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::NoteManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::NoteManager__Setup_d__16::NoteManager__Setup_d__16()   {
}
//  Writing Method size for method: ::VROSC::NoteManager.get_ExternalSynthesizer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::ExternalSynthesizer> (::VROSC::NoteManager::*)()>(&::VROSC::NoteManager::get_ExternalSynthesizer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16eec98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "get_ExternalSynthesizer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.get_InternalSynthesizer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InternalSynthesizer> (::VROSC::NoteManager::*)()>(&::VROSC::NoteManager::get_InternalSynthesizer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16eeca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "get_InternalSynthesizer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.get_IsReady
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::NoteManager::*)()>(&::VROSC::NoteManager::get_IsReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16eeca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "get_IsReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.set_IsReady
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)(bool)>(&::VROSC::NoteManager::set_IsReady)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16eecb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "set_IsReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)()>(&::VROSC::NoteManager::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x16eecbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)()>(&::VROSC::NoteManager::Setup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16eedb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)()>(&::VROSC::NoteManager::OnDestroy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x16eee44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.PlayNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)(::VROSC::WidgetSettings_Identifier, int32_t, float_t, ::VROSC::PatchSettings*, int32_t, ::System::Object*, double_t, ::VROSC::HandType, float_t, float_t)>(&::VROSC::NoteManager::PlayNote)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x16eef3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "PlayNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 10>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.StopNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)(::VROSC::WidgetSettings_Identifier, int32_t, ::VROSC::PatchSettings*, int32_t, ::System::Object*, ::VROSC::HandType)>(&::VROSC::NoteManager::StopNote)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x16ef4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "StopNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.GetActiveNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteManager_ActiveNote* (::VROSC::NoteManager::*)(int32_t, ::System::Object*, ::VROSC::HandType, int32_t, ::System::Object*)>(&::VROSC::NoteManager::GetActiveNote)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x16ef274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "GetActiveNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.IsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::NoteManager::*)()>(&::VROSC::NoteManager::IsPlaying)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16ef6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.SetParameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)(::VROSC::WidgetSettings_Identifier, float_t, int32_t, ::VROSC::PatchSettings*, int32_t, ::VROSC::HandType)>(&::VROSC::NoteManager::SetParameter)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x16ef6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "SetParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.SetVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)(::VROSC::WidgetSettings_Identifier, float_t, int32_t)>(&::VROSC::NoteManager::SetVolume)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16ef8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.SetChannel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)(::VROSC::WidgetSettings_Identifier, int32_t, int32_t)>(&::VROSC::NoteManager::SetChannel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16ef950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "SetChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.AllNotesOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)(::VROSC::WidgetSettings_Identifier, ::System::Object*, int32_t)>(&::VROSC::NoteManager::AllNotesOff)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x16efa00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.AllNotesOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)()>(&::VROSC::NoteManager::AllNotesOff)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x16efb5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)(::VROSC::UserDataControllers*)>(&::VROSC::NoteManager::UserDataLoaded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16efc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NoteManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NoteManager::*)()>(&::VROSC::NoteManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16efc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ExternalSynthesizer>& VROSC::NoteManager::__cordl_internal_get__externalSynthesizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalSynthesizer;
}
constexpr ::UnityW<::VROSC::ExternalSynthesizer> const& VROSC::NoteManager::__cordl_internal_get__externalSynthesizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalSynthesizer;
}
constexpr void VROSC::NoteManager::__cordl_internal_set__externalSynthesizer(::UnityW<::VROSC::ExternalSynthesizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____externalSynthesizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InternalSynthesizer>& VROSC::NoteManager::__cordl_internal_get__internalSynthesizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalSynthesizer;
}
constexpr ::UnityW<::VROSC::InternalSynthesizer> const& VROSC::NoteManager::__cordl_internal_get__internalSynthesizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalSynthesizer;
}
constexpr void VROSC::NoteManager::__cordl_internal_set__internalSynthesizer(::UnityW<::VROSC::InternalSynthesizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____internalSynthesizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::NoteManager_ActiveNote*>*& VROSC::NoteManager::__cordl_internal_get__activeNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeNotes;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::NoteManager_ActiveNote*>* const& VROSC::NoteManager::__cordl_internal_get__activeNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeNotes;
}
constexpr void VROSC::NoteManager::__cordl_internal_set__activeNotes(::System::Collections::Generic::List_1<::VROSC::NoteManager_ActiveNote*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::NoteManager::__cordl_internal_get__IsReady_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReady_k__BackingField;
}
constexpr bool const& VROSC::NoteManager::__cordl_internal_get__IsReady_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReady_k__BackingField;
}
constexpr void VROSC::NoteManager::__cordl_internal_set__IsReady_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsReady_k__BackingField = value;
}
inline void VROSC::NoteManager::setStaticF_OnReset(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnReset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::NoteManager::getStaticF_OnReset()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnReset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get>();
}
inline void VROSC::NoteManager::setStaticF_OnAnyNotePlayed(::System::Action_3<::VROSC::WidgetSettings_Identifier,::VROSC::PatchSettings*,double_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::VROSC::WidgetSettings_Identifier,::VROSC::PatchSettings*,double_t>*, "OnAnyNotePlayed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get>(std::forward<::System::Action_3<::VROSC::WidgetSettings_Identifier,::VROSC::PatchSettings*,double_t>*>(value));
}
inline ::System::Action_3<::VROSC::WidgetSettings_Identifier,::VROSC::PatchSettings*,double_t>* VROSC::NoteManager::getStaticF_OnAnyNotePlayed()  {
return ::cordl_internals::getStaticField<::System::Action_3<::VROSC::WidgetSettings_Identifier,::VROSC::PatchSettings*,double_t>*, "OnAnyNotePlayed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get>();
}
inline void VROSC::NoteManager::setStaticF_OnInstrumentEvent(::System::Action_1<::VROSC::InstrumentEvent*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::InstrumentEvent*>*, "OnInstrumentEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get>(std::forward<::System::Action_1<::VROSC::InstrumentEvent*>*>(value));
}
inline ::System::Action_1<::VROSC::InstrumentEvent*>* VROSC::NoteManager::getStaticF_OnInstrumentEvent()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::InstrumentEvent*>*, "OnInstrumentEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get>();
}
inline ::UnityW<::VROSC::ExternalSynthesizer> VROSC::NoteManager::get_ExternalSynthesizer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "get_ExternalSynthesizer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::ExternalSynthesizer>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::InternalSynthesizer> VROSC::NoteManager::get_InternalSynthesizer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "get_InternalSynthesizer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InternalSynthesizer>, false>(this, ___internal_method);
}
inline bool VROSC::NoteManager::get_IsReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "get_IsReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::NoteManager::set_IsReady(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "set_IsReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::NoteManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteManager::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteManager::PlayNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, float_t  velocity, ::VROSC::PatchSettings*  patchSettings, int32_t  channel, ::System::Object*  source, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "PlayNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 10>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, note, velocity, patchSettings, channel, source, predictedDspTime, handType, pitch, volume);
}
inline void VROSC::NoteManager::StopNote(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  note, ::VROSC::PatchSettings*  patchSettings, int32_t  channel, ::System::Object*  source, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "StopNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, note, patchSettings, channel, source, handType);
}
inline ::VROSC::NoteManager_ActiveNote* VROSC::NoteManager::GetActiveNote(int32_t  note, ::System::Object*  patch, ::VROSC::HandType  handType, int32_t  channel, ::System::Object*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "GetActiveNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NoteManager_ActiveNote*, false>(this, ___internal_method, note, patch, handType, channel, source);
}
inline bool VROSC::NoteManager::IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "IsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::NoteManager::SetParameter(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  parameterValue, int32_t  parameterId, ::VROSC::PatchSettings*  patchSettings, int32_t  channel, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "SetParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, parameterValue, parameterId, patchSettings, channel, handType);
}
inline void VROSC::NoteManager::SetVolume(::VROSC::WidgetSettings_Identifier  instrumentId, float_t  volume, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, volume, channel);
}
inline void VROSC::NoteManager::SetChannel(::VROSC::WidgetSettings_Identifier  instrumentId, int32_t  channel, int32_t  oldChannel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "SetChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, channel, oldChannel);
}
inline void VROSC::NoteManager::AllNotesOff(::VROSC::WidgetSettings_Identifier  instrumentId, ::System::Object*  patch, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, patch, channel);
}
inline void VROSC::NoteManager::AllNotesOff()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::NoteManager::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::NoteManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NoteManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NoteManager* VROSC::NoteManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NoteManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::NoteManager::NoteManager()   {
}
