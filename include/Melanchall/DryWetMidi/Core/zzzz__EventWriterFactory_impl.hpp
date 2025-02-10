#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/EventWriterFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__EventWriterFactory_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__IEventWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventWriterFactory.GetWriter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::IEventWriter* (*)(::Melanchall::DryWetMidi::Core::MidiEvent*)>(&::Melanchall::DryWetMidi::Core::EventWriterFactory::GetWriter)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x25a0744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get(),
                        "GetWriter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Core::EventWriterFactory::setStaticF_MetaEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value)  {
::cordl_internals::setStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "MetaEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>(std::forward<::Melanchall::DryWetMidi::Core::IEventWriter*>(value));
}
inline ::Melanchall::DryWetMidi::Core::IEventWriter* Melanchall::DryWetMidi::Core::EventWriterFactory::getStaticF_MetaEventWriter()  {
return ::cordl_internals::getStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "MetaEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>();
}
inline void Melanchall::DryWetMidi::Core::EventWriterFactory::setStaticF_ChannelEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value)  {
::cordl_internals::setStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "ChannelEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>(std::forward<::Melanchall::DryWetMidi::Core::IEventWriter*>(value));
}
inline ::Melanchall::DryWetMidi::Core::IEventWriter* Melanchall::DryWetMidi::Core::EventWriterFactory::getStaticF_ChannelEventWriter()  {
return ::cordl_internals::getStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "ChannelEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>();
}
inline void Melanchall::DryWetMidi::Core::EventWriterFactory::setStaticF_SysExEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value)  {
::cordl_internals::setStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "SysExEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>(std::forward<::Melanchall::DryWetMidi::Core::IEventWriter*>(value));
}
inline ::Melanchall::DryWetMidi::Core::IEventWriter* Melanchall::DryWetMidi::Core::EventWriterFactory::getStaticF_SysExEventWriter()  {
return ::cordl_internals::getStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "SysExEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>();
}
inline void Melanchall::DryWetMidi::Core::EventWriterFactory::setStaticF_SystemRealTimeEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value)  {
::cordl_internals::setStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "SystemRealTimeEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>(std::forward<::Melanchall::DryWetMidi::Core::IEventWriter*>(value));
}
inline ::Melanchall::DryWetMidi::Core::IEventWriter* Melanchall::DryWetMidi::Core::EventWriterFactory::getStaticF_SystemRealTimeEventWriter()  {
return ::cordl_internals::getStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "SystemRealTimeEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>();
}
inline void Melanchall::DryWetMidi::Core::EventWriterFactory::setStaticF_SystemCommonEventWriter(::Melanchall::DryWetMidi::Core::IEventWriter*  value)  {
::cordl_internals::setStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "SystemCommonEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>(std::forward<::Melanchall::DryWetMidi::Core::IEventWriter*>(value));
}
inline ::Melanchall::DryWetMidi::Core::IEventWriter* Melanchall::DryWetMidi::Core::EventWriterFactory::getStaticF_SystemCommonEventWriter()  {
return ::cordl_internals::getStaticField<::Melanchall::DryWetMidi::Core::IEventWriter*, "SystemCommonEventWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get>();
}
inline ::Melanchall::DryWetMidi::Core::IEventWriter* Melanchall::DryWetMidi::Core::EventWriterFactory::GetWriter(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventWriterFactory*>::get(),
                        "GetWriter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::IEventWriter*, false>(nullptr, ___internal_method, midiEvent);
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::EventWriterFactory::EventWriterFactory()   {
}
