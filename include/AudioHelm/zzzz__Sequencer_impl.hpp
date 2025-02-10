#pragma once
// IWYU pragma private; include "AudioHelm/Sequencer.hpp"
#include "AudioHelm/zzzz__NoteHandler_impl.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "AudioHelm/zzzz__Sequencer_def.hpp"
#include "AudioHelm/zzzz__MidiFile_def.hpp"
#include "AudioHelm/zzzz__NoteRow_def.hpp"
#include "AudioHelm/zzzz__Note_def.hpp"
#include "AudioHelm/zzzz__Sequencer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::AudioHelm::Sequencer_NoteAction._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_NoteAction::*)(::System::Object*, ::System::IntPtr)>(&::AudioHelm::Sequencer_NoteAction::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1828d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer_NoteAction.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_NoteAction::*)(::AudioHelm::Note*)>(&::AudioHelm::Sequencer_NoteAction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1828e40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer_NoteAction.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::AudioHelm::Sequencer_NoteAction::*)(::AudioHelm::Note*, ::System::AsyncCallback*, ::System::Object*)>(&::AudioHelm::Sequencer_NoteAction::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1828e54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer_NoteAction.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_NoteAction::*)(::System::IAsyncResult*)>(&::AudioHelm::Sequencer_NoteAction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1828e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void AudioHelm::Sequencer_NoteAction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void AudioHelm::Sequencer_NoteAction::Invoke(::AudioHelm::Note*  note)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline ::System::IAsyncResult* AudioHelm::Sequencer_NoteAction::BeginInvoke(::AudioHelm::Note*  note, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, note, callback, object);
}
inline void AudioHelm::Sequencer_NoteAction::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteAction*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::AudioHelm::Sequencer_NoteAction* AudioHelm::Sequencer_NoteAction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sequencer_NoteAction*>(object, method));
}
// Ctor Parameters []
constexpr ::AudioHelm::Sequencer_NoteAction::Sequencer_NoteAction()   {
}
//  Writing Method size for method: ::AudioHelm::Sequencer_BeatAction._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_BeatAction::*)(::System::Object*, ::System::IntPtr)>(&::AudioHelm::Sequencer_BeatAction::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1828e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer_BeatAction.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_BeatAction::*)(int32_t)>(&::AudioHelm::Sequencer_BeatAction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1828f0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer_BeatAction.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::AudioHelm::Sequencer_BeatAction::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::AudioHelm::Sequencer_BeatAction::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1828f20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer_BeatAction.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_BeatAction::*)(::System::IAsyncResult*)>(&::AudioHelm::Sequencer_BeatAction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1828fa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void AudioHelm::Sequencer_BeatAction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void AudioHelm::Sequencer_BeatAction::Invoke(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::System::IAsyncResult* AudioHelm::Sequencer_BeatAction::BeginInvoke(int32_t  index, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, index, callback, object);
}
inline void AudioHelm::Sequencer_BeatAction::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatAction*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::AudioHelm::Sequencer_BeatAction* AudioHelm::Sequencer_BeatAction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sequencer_BeatAction*>(object, method));
}
// Ctor Parameters []
constexpr ::AudioHelm::Sequencer_BeatAction::Sequencer_BeatAction()   {
}
//  Writing Method size for method: ::AudioHelm::Sequencer_NoteEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_NoteEvent::*)()>(&::AudioHelm::Sequencer_NoteEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1828fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void AudioHelm::Sequencer_NoteEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Sequencer_NoteEvent* AudioHelm::Sequencer_NoteEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sequencer_NoteEvent*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::Sequencer_NoteEvent::Sequencer_NoteEvent()   {
}
//  Writing Method size for method: ::AudioHelm::Sequencer_BeatEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_BeatEvent::*)()>(&::AudioHelm::Sequencer_BeatEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1828ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void AudioHelm::Sequencer_BeatEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_BeatEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Sequencer_BeatEvent* AudioHelm::Sequencer_BeatEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sequencer_BeatEvent*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::Sequencer_BeatEvent::Sequencer_BeatEvent()   {
}
//  Writing Method size for method: ::AudioHelm::Sequencer_NoteComparer.Compare
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::Sequencer_NoteComparer::*)(::AudioHelm::Note*, ::AudioHelm::Note*)>(&::AudioHelm::Sequencer_NoteComparer::Compare)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1829040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteComparer*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer_NoteComparer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_NoteComparer::*)()>(&::AudioHelm::Sequencer_NoteComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1828d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t AudioHelm::Sequencer_NoteComparer::Compare(::AudioHelm::Note*  left, ::AudioHelm::Note*  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteComparer*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, left, right);
}
inline void AudioHelm::Sequencer_NoteComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NoteComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Sequencer_NoteComparer* AudioHelm::Sequencer_NoteComparer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sequencer_NoteComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>"
constexpr  AudioHelm::Sequencer_NoteComparer::operator ::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>"
constexpr ::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>* AudioHelm::Sequencer_NoteComparer::i___System__Collections__Generic__IComparer_1___AudioHelm__Note__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::AudioHelm::Sequencer_NoteComparer::Sequencer_NoteComparer()   {
}
//  Writing Method size for method: ::AudioHelm::Sequencer_NotePosition._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_NotePosition::*)(float_t, int32_t)>(&::AudioHelm::Sequencer_NotePosition::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x182774c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NotePosition>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void AudioHelm::Sequencer_NotePosition::_ctor(float_t  position, int32_t  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NotePosition>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, note);
}
// Ctor Parameters [CppParam { name: "position_", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "note_", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AudioHelm::Sequencer_NotePosition::Sequencer_NotePosition(float_t  position_, int32_t  note_) noexcept  {
this->position_ = position_;
this->note_ = note_;
}
// Ctor Parameters []
constexpr ::AudioHelm::Sequencer_NotePosition::Sequencer_NotePosition()   {
}
//  Writing Method size for method: ::AudioHelm::Sequencer_NotePositionComparer.Compare
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::Sequencer_NotePositionComparer::*)(::AudioHelm::Sequencer_NotePosition, ::AudioHelm::Sequencer_NotePosition)>(&::AudioHelm::Sequencer_NotePositionComparer::Compare)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1829080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NotePositionComparer*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NotePosition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NotePosition>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer_NotePositionComparer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer_NotePositionComparer::*)()>(&::AudioHelm::Sequencer_NotePositionComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1828d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NotePositionComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t AudioHelm::Sequencer_NotePositionComparer::Compare(::AudioHelm::Sequencer_NotePosition  left, ::AudioHelm::Sequencer_NotePosition  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NotePositionComparer*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NotePosition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NotePosition>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, left, right);
}
inline void AudioHelm::Sequencer_NotePositionComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer_NotePositionComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Sequencer_NotePositionComparer* AudioHelm::Sequencer_NotePositionComparer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sequencer_NotePositionComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>"
constexpr  AudioHelm::Sequencer_NotePositionComparer::operator ::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>"
constexpr ::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>* AudioHelm::Sequencer_NotePositionComparer::i___System__Collections__Generic__IComparer_1___AudioHelm__Sequencer_NotePosition_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer_NotePosition>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::AudioHelm::Sequencer_NotePositionComparer::Sequencer_NotePositionComparer()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AudioHelm::Sequencer_Division::Sequencer_Division(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AudioHelm::Sequencer_Division::Sequencer_Division()   {
}
constexpr ::AudioHelm::Sequencer_Division  AudioHelm::Sequencer_Division::kEighth{static_cast<int32_t>(0x0)};
constexpr ::AudioHelm::Sequencer_Division  AudioHelm::Sequencer_Division::kSixteenth{static_cast<int32_t>(0x1)};
constexpr ::AudioHelm::Sequencer_Division  AudioHelm::Sequencer_Division::kTriplet{static_cast<int32_t>(0x2)};
constexpr ::AudioHelm::Sequencer_Division  AudioHelm::Sequencer_Division::kThirtySecond{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::AudioHelm::Sequencer.add_OnNoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Sequencer_NoteAction*)>(&::AudioHelm::Sequencer::add_OnNoteOn)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1827374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "add_OnNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NoteAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.remove_OnNoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Sequencer_NoteAction*)>(&::AudioHelm::Sequencer::remove_OnNoteOn)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1827410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "remove_OnNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NoteAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.add_OnNoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Sequencer_NoteAction*)>(&::AudioHelm::Sequencer::add_OnNoteOff)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18274ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "add_OnNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NoteAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.remove_OnNoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Sequencer_NoteAction*)>(&::AudioHelm::Sequencer::remove_OnNoteOff)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1827548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "remove_OnNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NoteAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.add_OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Sequencer_BeatAction*)>(&::AudioHelm::Sequencer::add_OnBeat)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18275e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "add_OnBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_BeatAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.remove_OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Sequencer_BeatAction*)>(&::AudioHelm::Sequencer::remove_OnBeat)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1827680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "remove_OnBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_BeatAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.AllNotesOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::AllNotesOff)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x1822e60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.NoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(int32_t, float_t)>(&::AudioHelm::Sequencer::NoteOn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.NoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(int32_t)>(&::AudioHelm::Sequencer::NoteOff)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.StartScheduled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(double_t)>(&::AudioHelm::Sequencer::StartScheduled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x182771c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "StartScheduled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.StartOnNextCycle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::StartOnNextCycle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1827720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1827724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::OnEnable)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1822b04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::OnDisable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1822d34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.WaitForNextCycle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::WaitForNextCycle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18232f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "WaitForNextCycle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.WaitingForNextCycle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::WaitingForNextCycle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1827728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "WaitingForNextCycle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.NoteOnPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::Sequencer_NotePosition (::AudioHelm::Sequencer::*)(::AudioHelm::Note*)>(&::AudioHelm::Sequencer::NoteOnPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1827730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NoteOnPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.NoteOffPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::Sequencer_NotePosition (::AudioHelm::Sequencer::*)(::AudioHelm::Note*)>(&::AudioHelm::Sequencer::NoteOffPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1827758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NoteOffPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.RemoveSortedNoteEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Note*)>(&::AudioHelm::Sequencer::RemoveSortedNoteEvents)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1827778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "RemoveSortedNoteEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.AddSortedNoteEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Note*)>(&::AudioHelm::Sequencer::AddSortedNoteEvents)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x18277f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "AddSortedNoteEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.Reference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::Reference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18278dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.InitNoteRows
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::InitNoteRows)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x182263c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "InitNoteRows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.GetDivisionLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::GetDivisionLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18278e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetDivisionLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.NotifyNoteKeyChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Note*, int32_t)>(&::AudioHelm::Sequencer::NotifyNoteKeyChanged)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182437c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NotifyNoteKeyChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.NotifyNoteStartChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Note*, float_t)>(&::AudioHelm::Sequencer::NotifyNoteStartChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18245c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NotifyNoteStartChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.NotifyNoteEndChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Note*, float_t)>(&::AudioHelm::Sequencer::NotifyNoteEndChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1824670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NotifyNoteEndChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.RemoveNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Note*)>(&::AudioHelm::Sequencer::RemoveNote)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1827914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "RemoveNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.NoteExistsInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Sequencer::*)(int32_t, float_t, float_t)>(&::AudioHelm::Sequencer::NoteExistsInRange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18279b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NoteExistsInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.GetNoteInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::Note* (::AudioHelm::Sequencer::*)(int32_t, float_t, float_t, ::AudioHelm::Note*)>(&::AudioHelm::Sequencer::GetNoteInRange)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18279d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetNoteInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.GetAllNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::AudioHelm::Note*>* (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::GetAllNotes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1827ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetAllNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.GetAllNoteOnsInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::AudioHelm::Note*>* (::AudioHelm::Sequencer::*)(float_t, float_t)>(&::AudioHelm::Sequencer::GetAllNoteOnsInRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1827304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetAllNoteOnsInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.GetAllNoteOffsInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::AudioHelm::Note*>* (::AudioHelm::Sequencer::*)(float_t, float_t)>(&::AudioHelm::Sequencer::GetAllNoteOffsInRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1827edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetAllNoteOffsInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.RemoveNotesInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(int32_t, float_t, float_t)>(&::AudioHelm::Sequencer::RemoveNotesInRange)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1827ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "RemoveNotesInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.RemoveNotesContainedInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(int32_t, float_t, float_t, ::AudioHelm::Note*)>(&::AudioHelm::Sequencer::RemoveNotesContainedInRange)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x1828234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "RemoveNotesContainedInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.ClampNotesInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(int32_t, float_t, float_t, ::AudioHelm::Note*)>(&::AudioHelm::Sequencer::ClampNotesInRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1828590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "ClampNotesInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.AddNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::Note* (::AudioHelm::Sequencer::*)(int32_t, float_t, float_t, float_t)>(&::AudioHelm::Sequencer::AddNote)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x181c990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "AddNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.TransposeNotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(int32_t)>(&::AudioHelm::Sequencer::TransposeNotes)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x18285f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "TransposeNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.ReadMidiData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::MidiFile_MidiData*)>(&::AudioHelm::Sequencer::ReadMidiData)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1828788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "ReadMidiData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::MidiFile_MidiData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.ReadMidiFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::System::IO::Stream*)>(&::AudioHelm::Sequencer::ReadMidiFile)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1828900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "ReadMidiFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.ReadMidiFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::MidiFile*)>(&::AudioHelm::Sequencer::ReadMidiFile)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182891c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "ReadMidiFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::MidiFile*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::Clear)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x181c764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.GetSixteenthTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::GetSixteenthTime)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1826ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetSixteenthTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.GetSequencerTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::GetSequencerTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182325c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetSequencerTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.GetSequencerPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::GetSequencerPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x18272bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetSequencerPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.GetAllNoteEventsInRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::AudioHelm::Note*>* (::AudioHelm::Sequencer::*)(float_t, float_t, ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*)>(&::AudioHelm::Sequencer::GetAllNoteEventsInRange)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x1827c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetAllNoteEventsInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.UpdateIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::UpdateIndex)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x18289ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "UpdateIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.UpdateBeatTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::UpdateBeatTime)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1823128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "UpdateBeatTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.SendNoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Note*)>(&::AudioHelm::Sequencer::SendNoteOff)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1828ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "SendNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.SendNoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(::AudioHelm::Note*)>(&::AudioHelm::Sequencer::SendNoteOn)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1828b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "SendNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer.UpdatePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)(bool)>(&::AudioHelm::Sequencer::UpdatePosition)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x1823414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "UpdatePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sequencer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sequencer::*)()>(&::AudioHelm::Sequencer::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x18237f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::AudioHelm::Sequencer_NoteAction*& AudioHelm::Sequencer::__cordl_internal_get_OnNoteOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteOn;
}
constexpr ::AudioHelm::Sequencer_NoteAction* const& AudioHelm::Sequencer::__cordl_internal_get_OnNoteOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteOn;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_OnNoteOn(::AudioHelm::Sequencer_NoteAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnNoteOn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::Sequencer_NoteAction*& AudioHelm::Sequencer::__cordl_internal_get_OnNoteOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteOff;
}
constexpr ::AudioHelm::Sequencer_NoteAction* const& AudioHelm::Sequencer::__cordl_internal_get_OnNoteOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteOff;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_OnNoteOff(::AudioHelm::Sequencer_NoteAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnNoteOff)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::Sequencer_BeatAction*& AudioHelm::Sequencer::__cordl_internal_get_OnBeat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBeat;
}
constexpr ::AudioHelm::Sequencer_BeatAction* const& AudioHelm::Sequencer::__cordl_internal_get_OnBeat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBeat;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_OnBeat(::AudioHelm::Sequencer_BeatAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnBeat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::Sequencer_NoteEvent*& AudioHelm::Sequencer::__cordl_internal_get_noteOnEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noteOnEvent;
}
constexpr ::AudioHelm::Sequencer_NoteEvent* const& AudioHelm::Sequencer::__cordl_internal_get_noteOnEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noteOnEvent;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_noteOnEvent(::AudioHelm::Sequencer_NoteEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noteOnEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::Sequencer_NoteEvent*& AudioHelm::Sequencer::__cordl_internal_get_noteOffEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noteOffEvent;
}
constexpr ::AudioHelm::Sequencer_NoteEvent* const& AudioHelm::Sequencer::__cordl_internal_get_noteOffEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noteOffEvent;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_noteOffEvent(::AudioHelm::Sequencer_NoteEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noteOffEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::Sequencer_BeatEvent*& AudioHelm::Sequencer::__cordl_internal_get_beatEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatEvent;
}
constexpr ::AudioHelm::Sequencer_BeatEvent* const& AudioHelm::Sequencer::__cordl_internal_get_beatEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatEvent;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_beatEvent(::AudioHelm::Sequencer_BeatEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>*& AudioHelm::Sequencer::__cordl_internal_get_activeNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNotes;
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>* const& AudioHelm::Sequencer::__cordl_internal_get_activeNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNotes;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_activeNotes(::System::Collections::Generic::List_1<::AudioHelm::Note*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& AudioHelm::Sequencer::__cordl_internal_get_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr int32_t const& AudioHelm::Sequencer::__cordl_internal_get_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___length = value;
}
constexpr int32_t& AudioHelm::Sequencer::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& AudioHelm::Sequencer::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr bool& AudioHelm::Sequencer::__cordl_internal_get_loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr bool const& AudioHelm::Sequencer::__cordl_internal_get_loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop = value;
}
constexpr double_t& AudioHelm::Sequencer::__cordl_internal_get_beatTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatTime;
}
constexpr double_t const& AudioHelm::Sequencer::__cordl_internal_get_beatTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatTime;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_beatTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beatTime = value;
}
constexpr bool& AudioHelm::Sequencer::__cordl_internal_get_paused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paused;
}
constexpr bool const& AudioHelm::Sequencer::__cordl_internal_get_paused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paused;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_paused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paused = value;
}
constexpr ::ArrayW<::AudioHelm::NoteRow*,::Array<::AudioHelm::NoteRow*>*>& AudioHelm::Sequencer::__cordl_internal_get_allNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allNotes;
}
constexpr ::ArrayW<::AudioHelm::NoteRow*,::Array<::AudioHelm::NoteRow*>*> const& AudioHelm::Sequencer::__cordl_internal_get_allNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allNotes;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_allNotes(::ArrayW<::AudioHelm::NoteRow*,::Array<::AudioHelm::NoteRow*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& AudioHelm::Sequencer::__cordl_internal_get_scrollPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollPosition;
}
constexpr ::UnityEngine::Vector2 const& AudioHelm::Sequencer::__cordl_internal_get_scrollPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollPosition;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_scrollPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollPosition = value;
}
constexpr bool& AudioHelm::Sequencer::__cordl_internal_get_autoScroll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoScroll;
}
constexpr bool const& AudioHelm::Sequencer::__cordl_internal_get_autoScroll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoScroll;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_autoScroll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoScroll = value;
}
constexpr ::AudioHelm::Sequencer_Division& AudioHelm::Sequencer::__cordl_internal_get_division()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___division;
}
constexpr ::AudioHelm::Sequencer_Division const& AudioHelm::Sequencer::__cordl_internal_get_division() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___division;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_division(::AudioHelm::Sequencer_Division  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___division = value;
}
constexpr float_t& AudioHelm::Sequencer::__cordl_internal_get_zoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoom;
}
constexpr float_t const& AudioHelm::Sequencer::__cordl_internal_get_zoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoom;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_zoom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoom = value;
}
constexpr ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*& AudioHelm::Sequencer::__cordl_internal_get_sortedNoteOns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedNoteOns;
}
constexpr ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>* const& AudioHelm::Sequencer::__cordl_internal_get_sortedNoteOns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedNoteOns;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_sortedNoteOns(::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sortedNoteOns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*& AudioHelm::Sequencer::__cordl_internal_get_sortedNoteOffs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedNoteOffs;
}
constexpr ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>* const& AudioHelm::Sequencer::__cordl_internal_get_sortedNoteOffs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedNoteOffs;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_sortedNoteOffs(::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sortedNoteOffs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& AudioHelm::Sequencer::__cordl_internal_get_lastSequencerPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSequencerPosition;
}
constexpr float_t const& AudioHelm::Sequencer::__cordl_internal_get_lastSequencerPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSequencerPosition;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_lastSequencerPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSequencerPosition = value;
}
constexpr bool& AudioHelm::Sequencer::__cordl_internal_get_waitTillNextCycle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTillNextCycle;
}
constexpr bool const& AudioHelm::Sequencer::__cordl_internal_get_waitTillNextCycle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTillNextCycle;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_waitTillNextCycle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitTillNextCycle = value;
}
constexpr int32_t& AudioHelm::Sequencer::__cordl_internal_get_numCycles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numCycles;
}
constexpr int32_t const& AudioHelm::Sequencer::__cordl_internal_get_numCycles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numCycles;
}
constexpr void AudioHelm::Sequencer::__cordl_internal_set_numCycles(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numCycles = value;
}
inline void AudioHelm::Sequencer::setStaticF_noteComparer(::AudioHelm::Sequencer_NoteComparer*  value)  {
::cordl_internals::setStaticField<::AudioHelm::Sequencer_NoteComparer*, "noteComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get>(std::forward<::AudioHelm::Sequencer_NoteComparer*>(value));
}
inline ::AudioHelm::Sequencer_NoteComparer* AudioHelm::Sequencer::getStaticF_noteComparer()  {
return ::cordl_internals::getStaticField<::AudioHelm::Sequencer_NoteComparer*, "noteComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get>();
}
inline void AudioHelm::Sequencer::setStaticF_notePositionComparer(::AudioHelm::Sequencer_NotePositionComparer*  value)  {
::cordl_internals::setStaticField<::AudioHelm::Sequencer_NotePositionComparer*, "notePositionComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get>(std::forward<::AudioHelm::Sequencer_NotePositionComparer*>(value));
}
inline ::AudioHelm::Sequencer_NotePositionComparer* AudioHelm::Sequencer::getStaticF_notePositionComparer()  {
return ::cordl_internals::getStaticField<::AudioHelm::Sequencer_NotePositionComparer*, "notePositionComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get>();
}
inline void AudioHelm::Sequencer::add_OnNoteOn(::AudioHelm::Sequencer_NoteAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "add_OnNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NoteAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Sequencer::remove_OnNoteOn(::AudioHelm::Sequencer_NoteAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "remove_OnNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NoteAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Sequencer::add_OnNoteOff(::AudioHelm::Sequencer_NoteAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "add_OnNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NoteAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Sequencer::remove_OnNoteOff(::AudioHelm::Sequencer_NoteAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "remove_OnNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_NoteAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Sequencer::add_OnBeat(::AudioHelm::Sequencer_BeatAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "add_OnBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_BeatAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Sequencer::remove_OnBeat(::AudioHelm::Sequencer_BeatAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "remove_OnBeat",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Sequencer_BeatAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Sequencer::AllNotesOff()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::NoteOn(int32_t  note, float_t  velocity)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, velocity);
}
inline void AudioHelm::Sequencer::NoteOff(int32_t  note)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void AudioHelm::Sequencer::StartScheduled(double_t  dspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "StartScheduled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dspTime);
}
inline void AudioHelm::Sequencer::StartOnNextCycle()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::OnEnable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::OnDisable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::WaitForNextCycle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "WaitForNextCycle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool AudioHelm::Sequencer::WaitingForNextCycle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "WaitingForNextCycle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::AudioHelm::Sequencer_NotePosition AudioHelm::Sequencer::NoteOnPosition(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NoteOnPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::Sequencer_NotePosition, false>(this, ___internal_method, note);
}
inline ::AudioHelm::Sequencer_NotePosition AudioHelm::Sequencer::NoteOffPosition(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NoteOffPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::Sequencer_NotePosition, false>(this, ___internal_method, note);
}
inline void AudioHelm::Sequencer::RemoveSortedNoteEvents(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "RemoveSortedNoteEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void AudioHelm::Sequencer::AddSortedNoteEvents(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "AddSortedNoteEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline ::System::IntPtr AudioHelm::Sequencer::Reference()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::InitNoteRows()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "InitNoteRows",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t AudioHelm::Sequencer::GetDivisionLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetDivisionLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::NotifyNoteKeyChanged(::AudioHelm::Note*  note, int32_t  oldKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NotifyNoteKeyChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, oldKey);
}
inline void AudioHelm::Sequencer::NotifyNoteStartChanged(::AudioHelm::Note*  note, float_t  oldStart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NotifyNoteStartChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, oldStart);
}
inline void AudioHelm::Sequencer::NotifyNoteEndChanged(::AudioHelm::Note*  note, float_t  oldEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NotifyNoteEndChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, oldEnd);
}
inline void AudioHelm::Sequencer::RemoveNote(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "RemoveNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline bool AudioHelm::Sequencer::NoteExistsInRange(int32_t  note, float_t  start, float_t  end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "NoteExistsInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, note, start, end);
}
inline ::AudioHelm::Note* AudioHelm::Sequencer::GetNoteInRange(int32_t  note, float_t  start, float_t  end, ::AudioHelm::Note*  ignore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetNoteInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::Note*, false>(this, ___internal_method, note, start, end, ignore);
}
inline ::System::Collections::Generic::List_1<::AudioHelm::Note*>* AudioHelm::Sequencer::GetAllNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetAllNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::AudioHelm::Note*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::AudioHelm::Note*>* AudioHelm::Sequencer::GetAllNoteOnsInRange(float_t  start, float_t  end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetAllNoteOnsInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::AudioHelm::Note*>*, false>(this, ___internal_method, start, end);
}
inline ::System::Collections::Generic::List_1<::AudioHelm::Note*>* AudioHelm::Sequencer::GetAllNoteOffsInRange(float_t  start, float_t  end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetAllNoteOffsInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::AudioHelm::Note*>*, false>(this, ___internal_method, start, end);
}
inline void AudioHelm::Sequencer::RemoveNotesInRange(int32_t  note, float_t  start, float_t  end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "RemoveNotesInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, start, end);
}
inline void AudioHelm::Sequencer::RemoveNotesContainedInRange(int32_t  note, float_t  start, float_t  end, ::AudioHelm::Note*  ignore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "RemoveNotesContainedInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, start, end, ignore);
}
inline void AudioHelm::Sequencer::ClampNotesInRange(int32_t  note, float_t  start, float_t  end, ::AudioHelm::Note*  ignore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "ClampNotesInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, start, end, ignore);
}
inline ::AudioHelm::Note* AudioHelm::Sequencer::AddNote(int32_t  note, float_t  start, float_t  end, float_t  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "AddNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::Note*, false>(this, ___internal_method, note, start, end, velocity);
}
inline void AudioHelm::Sequencer::TransposeNotes(int32_t  transpose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "TransposeNotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transpose);
}
inline void AudioHelm::Sequencer::ReadMidiData(::AudioHelm::MidiFile_MidiData*  midiData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "ReadMidiData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::MidiFile_MidiData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, midiData);
}
inline void AudioHelm::Sequencer::ReadMidiFile(::System::IO::Stream*  midiStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "ReadMidiFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, midiStream);
}
inline void AudioHelm::Sequencer::ReadMidiFile(::AudioHelm::MidiFile*  midiFile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "ReadMidiFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::MidiFile*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, midiFile);
}
inline void AudioHelm::Sequencer::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t AudioHelm::Sequencer::GetSixteenthTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetSixteenthTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline double_t AudioHelm::Sequencer::GetSequencerTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetSequencerTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t AudioHelm::Sequencer::GetSequencerPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetSequencerPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::AudioHelm::Note*>* AudioHelm::Sequencer::GetAllNoteEventsInRange(float_t  start, float_t  end, ::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*  events)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "GetAllNoteEventsInRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedList_2<::AudioHelm::Sequencer_NotePosition,::AudioHelm::Note*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::AudioHelm::Note*>*, false>(this, ___internal_method, start, end, events);
}
inline void AudioHelm::Sequencer::UpdateIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "UpdateIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::UpdateBeatTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "UpdateBeatTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sequencer::SendNoteOff(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "SendNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void AudioHelm::Sequencer::SendNoteOn(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "SendNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void AudioHelm::Sequencer::UpdatePosition(bool  sendEvents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        "UpdatePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sendEvents);
}
inline void AudioHelm::Sequencer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sequencer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Sequencer* AudioHelm::Sequencer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sequencer*>());
}
/// @brief Convert operator to "::AudioHelm::NoteHandler"
constexpr  AudioHelm::Sequencer::operator ::AudioHelm::NoteHandler*() noexcept {
return static_cast<::AudioHelm::NoteHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::AudioHelm::NoteHandler"
constexpr ::AudioHelm::NoteHandler* AudioHelm::Sequencer::i___AudioHelm__NoteHandler() noexcept {
return static_cast<::AudioHelm::NoteHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  AudioHelm::Sequencer::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* AudioHelm::Sequencer::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::AudioHelm::Sequencer::Sequencer()   {
}
