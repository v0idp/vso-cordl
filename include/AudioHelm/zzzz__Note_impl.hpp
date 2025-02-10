#pragma once
// IWYU pragma private; include "AudioHelm/Note.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_impl.hpp"
#include "AudioHelm/zzzz__Note_def.hpp"
#include "AudioHelm/zzzz__Note_def.hpp"
#include "AudioHelm/zzzz__Sequencer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::AudioHelm::Note_NoteAction._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note_NoteAction::*)(::System::Object*, ::System::IntPtr)>(&::AudioHelm::Note_NoteAction::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1824a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note_NoteAction.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note_NoteAction::*)(::AudioHelm::Note*)>(&::AudioHelm::Note_NoteAction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1824b40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note_NoteAction.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::AudioHelm::Note_NoteAction::*)(::AudioHelm::Note*, ::System::AsyncCallback*, ::System::Object*)>(&::AudioHelm::Note_NoteAction::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1824b54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note_NoteAction.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note_NoteAction::*)(::System::IAsyncResult*)>(&::AudioHelm::Note_NoteAction::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1824b74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void AudioHelm::Note_NoteAction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void AudioHelm::Note_NoteAction::Invoke(::AudioHelm::Note*  note)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline ::System::IAsyncResult* AudioHelm::Note_NoteAction::BeginInvoke(::AudioHelm::Note*  note, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, note, callback, object);
}
inline void AudioHelm::Note_NoteAction::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note_NoteAction*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::AudioHelm::Note_NoteAction* AudioHelm::Note_NoteAction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Note_NoteAction*>(object, method));
}
// Ctor Parameters []
constexpr ::AudioHelm::Note_NoteAction::Note_NoteAction()   {
}
//  Writing Method size for method: ::AudioHelm::Note.add_OnNoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)(::AudioHelm::Note_NoteAction*)>(&::AudioHelm::Note::add_OnNoteOn)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1824008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "add_OnNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note_NoteAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.remove_OnNoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)(::AudioHelm::Note_NoteAction*)>(&::AudioHelm::Note::remove_OnNoteOn)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18240a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "remove_OnNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note_NoteAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.add_OnNoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)(::AudioHelm::Note_NoteAction*)>(&::AudioHelm::Note::add_OnNoteOff)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1824140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "add_OnNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note_NoteAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.remove_OnNoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)(::AudioHelm::Note_NoteAction*)>(&::AudioHelm::Note::remove_OnNoteOff)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18241dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "remove_OnNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note_NoteAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.get_note
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::Note::*)()>(&::AudioHelm::Note::get_note)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1824278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "get_note",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.set_note
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)(int32_t)>(&::AudioHelm::Note::set_note)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1824280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "set_note",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.get_start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::AudioHelm::Note::*)()>(&::AudioHelm::Note::get_start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18244ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "get_start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.set_start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)(float_t)>(&::AudioHelm::Note::set_start)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18244f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "set_start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.get_end
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::AudioHelm::Note::*)()>(&::AudioHelm::Note::get_end)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1824668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "get_end",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.set_end
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)(float_t)>(&::AudioHelm::Note::set_end)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x181cc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "set_end",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.get_velocity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::AudioHelm::Note::*)()>(&::AudioHelm::Note::get_velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1824714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "get_velocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.set_velocity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)(float_t)>(&::AudioHelm::Note::set_velocity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x182471c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "set_velocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)()>(&::AudioHelm::Note::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1824754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)()>(&::AudioHelm::Note::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1824758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.CopySettingsToNative
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)()>(&::AudioHelm::Note::CopySettingsToNative)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x182475c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "CopySettingsToNative",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.HasNativeNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Note::*)()>(&::AudioHelm::Note::HasNativeNote)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18247c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "HasNativeNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.HasNativeSequencer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Note::*)()>(&::AudioHelm::Note::HasNativeSequencer)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18247d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "HasNativeSequencer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.FullyNative
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Note::*)()>(&::AudioHelm::Note::FullyNative)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1824348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "FullyNative",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.TriggerNoteOnEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)()>(&::AudioHelm::Note::TriggerNoteOnEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182486c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "TriggerNoteOnEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.TriggerNoteOffEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)()>(&::AudioHelm::Note::TriggerNoteOffEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182488c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "TriggerNoteOffEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.TryCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)()>(&::AudioHelm::Note::TryCreate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1822a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "TryCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.TryDelete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)()>(&::AudioHelm::Note::TryDelete)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18248ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "TryDelete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.OverlapsRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Note::*)(float_t, float_t)>(&::AudioHelm::Note::OverlapsRange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18248ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "OverlapsRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.InsideRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Note::*)(float_t, float_t)>(&::AudioHelm::Note::InsideRange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18249bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "InsideRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note.RemoveRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)(float_t, float_t)>(&::AudioHelm::Note::RemoveRange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18249e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "RemoveRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Note._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Note::*)()>(&::AudioHelm::Note::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1824a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::AudioHelm::Note_NoteAction*& AudioHelm::Note::__cordl_internal_get_OnNoteOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteOn;
}
constexpr ::AudioHelm::Note_NoteAction* const& AudioHelm::Note::__cordl_internal_get_OnNoteOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteOn;
}
constexpr void AudioHelm::Note::__cordl_internal_set_OnNoteOn(::AudioHelm::Note_NoteAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnNoteOn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::Note_NoteAction*& AudioHelm::Note::__cordl_internal_get_OnNoteOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteOff;
}
constexpr ::AudioHelm::Note_NoteAction* const& AudioHelm::Note::__cordl_internal_get_OnNoteOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteOff;
}
constexpr void AudioHelm::Note::__cordl_internal_set_OnNoteOff(::AudioHelm::Note_NoteAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnNoteOff)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& AudioHelm::Note::__cordl_internal_get_note_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___note_;
}
constexpr int32_t const& AudioHelm::Note::__cordl_internal_get_note_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___note_;
}
constexpr void AudioHelm::Note::__cordl_internal_set_note_(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___note_ = value;
}
constexpr float_t& AudioHelm::Note::__cordl_internal_get_start_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start_;
}
constexpr float_t const& AudioHelm::Note::__cordl_internal_get_start_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start_;
}
constexpr void AudioHelm::Note::__cordl_internal_set_start_(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start_ = value;
}
constexpr float_t& AudioHelm::Note::__cordl_internal_get_end_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_;
}
constexpr float_t const& AudioHelm::Note::__cordl_internal_get_end_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_;
}
constexpr void AudioHelm::Note::__cordl_internal_set_end_(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end_ = value;
}
constexpr float_t& AudioHelm::Note::__cordl_internal_get_velocity_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity_;
}
constexpr float_t const& AudioHelm::Note::__cordl_internal_get_velocity_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity_;
}
constexpr void AudioHelm::Note::__cordl_internal_set_velocity_(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity_ = value;
}
constexpr ::UnityW<::AudioHelm::Sequencer>& AudioHelm::Note::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::AudioHelm::Sequencer> const& AudioHelm::Note::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void AudioHelm::Note::__cordl_internal_set_parent(::UnityW<::AudioHelm::Sequencer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IntPtr& AudioHelm::Note::__cordl_internal_get_reference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reference;
}
constexpr ::System::IntPtr const& AudioHelm::Note::__cordl_internal_get_reference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reference;
}
constexpr void AudioHelm::Note::__cordl_internal_set_reference(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reference = value;
}
inline void AudioHelm::Note::add_OnNoteOn(::AudioHelm::Note_NoteAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "add_OnNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note_NoteAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Note::remove_OnNoteOn(::AudioHelm::Note_NoteAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "remove_OnNoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note_NoteAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Note::add_OnNoteOff(::AudioHelm::Note_NoteAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "add_OnNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note_NoteAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Note::remove_OnNoteOff(::AudioHelm::Note_NoteAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "remove_OnNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note_NoteAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t AudioHelm::Note::get_note()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "get_note",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void AudioHelm::Note::set_note(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "set_note",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t AudioHelm::Note::get_start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "get_start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void AudioHelm::Note::set_start(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "set_start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t AudioHelm::Note::get_end()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "get_end",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void AudioHelm::Note::set_end(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "set_end",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t AudioHelm::Note::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "get_velocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void AudioHelm::Note::set_velocity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "set_velocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Note::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Note::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Note::CopySettingsToNative()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "CopySettingsToNative",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool AudioHelm::Note::HasNativeNote()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "HasNativeNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool AudioHelm::Note::HasNativeSequencer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "HasNativeSequencer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool AudioHelm::Note::FullyNative()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "FullyNative",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void AudioHelm::Note::TriggerNoteOnEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "TriggerNoteOnEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Note::TriggerNoteOffEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "TriggerNoteOffEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Note::TryCreate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "TryCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Note::TryDelete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "TryDelete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool AudioHelm::Note::OverlapsRange(float_t  rangeStart, float_t  rangeEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "OverlapsRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rangeStart, rangeEnd);
}
inline bool AudioHelm::Note::InsideRange(float_t  rangeStart, float_t  rangeEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "InsideRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rangeStart, rangeEnd);
}
inline void AudioHelm::Note::RemoveRange(float_t  rangeStart, float_t  rangeEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        "RemoveRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rangeStart, rangeEnd);
}
inline void AudioHelm::Note::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Note*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Note* AudioHelm::Note::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Note*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  AudioHelm::Note::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* AudioHelm::Note::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::AudioHelm::Note::Note()   {
}
