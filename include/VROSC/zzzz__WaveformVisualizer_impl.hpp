#pragma once
// IWYU pragma private; include "VROSC/WaveformVisualizer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__WaveformVisualizer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "VROSC/zzzz__WaveformVisualizer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::WaveformVisualizer_EdgeBehaviour::WaveformVisualizer_EdgeBehaviour(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::WaveformVisualizer_EdgeBehaviour::WaveformVisualizer_EdgeBehaviour()   {
}
constexpr ::VROSC::WaveformVisualizer_EdgeBehaviour  VROSC::WaveformVisualizer_EdgeBehaviour::Wipe{static_cast<int32_t>(0x0)};
constexpr ::VROSC::WaveformVisualizer_EdgeBehaviour  VROSC::WaveformVisualizer_EdgeBehaviour::Keep{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::WaveformVisualizer_RenderMode::WaveformVisualizer_RenderMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::WaveformVisualizer_RenderMode::WaveformVisualizer_RenderMode()   {
}
constexpr ::VROSC::WaveformVisualizer_RenderMode  VROSC::WaveformVisualizer_RenderMode::Replace{static_cast<int32_t>(0x0)};
constexpr ::VROSC::WaveformVisualizer_RenderMode  VROSC::WaveformVisualizer_RenderMode::Add{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::VROSC::WaveformVisualizer___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer___c__DisplayClass18_0::*)()>(&::VROSC::WaveformVisualizer___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fe168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer___c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer___c__DisplayClass18_0._CreateVisualization_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer___c__DisplayClass18_0::*)()>(&::VROSC::WaveformVisualizer___c__DisplayClass18_0::_CreateVisualization_b__0)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x16fe170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer___c__DisplayClass18_0*>::get(),
                        "<CreateVisualization>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_get_endSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSample;
}
constexpr int32_t const& VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_get_endSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endSample;
}
constexpr void VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_set_endSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endSample = value;
}
constexpr int32_t& VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_get_startSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSample;
}
constexpr int32_t const& VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_get_startSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSample;
}
constexpr void VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_set_startSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSample = value;
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_get_audioData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioData;
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_get_audioData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioData;
}
constexpr void VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_set_audioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::WaveformVisualizer>& VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::WaveformVisualizer> const& VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::WaveformVisualizer___c__DisplayClass18_0::__cordl_internal_set___4__this(::UnityW<::VROSC::WaveformVisualizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::WaveformVisualizer___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer___c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WaveformVisualizer___c__DisplayClass18_0::_CreateVisualization_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer___c__DisplayClass18_0*>::get(),
                        "<CreateVisualization>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::WaveformVisualizer___c__DisplayClass18_0* VROSC::WaveformVisualizer___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::WaveformVisualizer___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::WaveformVisualizer___c__DisplayClass18_0::WaveformVisualizer___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::VROSC::WaveformVisualizer__CreateVisualization_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer__CreateVisualization_d__18::*)()>(&::VROSC::WaveformVisualizer__CreateVisualization_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x16fe304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer__CreateVisualization_d__18>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer__CreateVisualization_d__18.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer__CreateVisualization_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::WaveformVisualizer__CreateVisualization_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16fe57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer__CreateVisualization_d__18>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::WaveformVisualizer__CreateVisualization_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer__CreateVisualization_d__18>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WaveformVisualizer__CreateVisualization_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer__CreateVisualization_d__18>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::WaveformVisualizer__CreateVisualization_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::WaveformVisualizer__CreateVisualization_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "endSample", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startSample", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::WaveformVisualizer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::WaveformVisualizer__CreateVisualization_d__18::WaveformVisualizer__CreateVisualization_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, int32_t  endSample, int32_t  startSample, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::UnityW<::VROSC::WaveformVisualizer>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->endSample = endSample;
this->startSample = startSample;
this->audioData = audioData;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::WaveformVisualizer__CreateVisualization_d__18::WaveformVisualizer__CreateVisualization_d__18()   {
}
//  Writing Method size for method: ::VROSC::WaveformVisualizer.get_Values
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t,::Array<float_t>*> (::VROSC::WaveformVisualizer::*)()>(&::VROSC::WaveformVisualizer::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fdfd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "get_Values",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)()>(&::VROSC::WaveformVisualizer::Setup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16fdc24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)()>(&::VROSC::WaveformVisualizer::Clear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x16fd1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.SetWindowLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)(float_t)>(&::VROSC::WaveformVisualizer::SetWindowLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fdfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "SetWindowLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.Wipe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)()>(&::VROSC::WaveformVisualizer::Wipe)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16fdcfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.CreateVisualization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, int32_t, int32_t)>(&::VROSC::WaveformVisualizer::CreateVisualization)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16fd778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "CreateVisualization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.OnVisualizationUpdated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)()>(&::VROSC::WaveformVisualizer::OnVisualizationUpdated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fdfe0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.OnPartialVisualizationUpdated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)(int32_t, ::ArrayW<float_t,::Array<float_t>*>)>(&::VROSC::WaveformVisualizer::OnPartialVisualizationUpdated)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16fdf20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.SetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)(int32_t, float_t, ::VROSC::WaveformVisualizer_RenderMode)>(&::VROSC::WaveformVisualizer::SetValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x16fdfe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WaveformVisualizer_RenderMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.UpdateVisualization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, float_t)>(&::VROSC::WaveformVisualizer::UpdateVisualization)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x16fd330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "UpdateVisualization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer.GetVisualPower
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::WaveformVisualizer::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, int32_t, int32_t, float_t)>(&::VROSC::WaveformVisualizer::GetVisualPower)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x16fe034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "GetVisualPower",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WaveformVisualizer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WaveformVisualizer::*)()>(&::VROSC::WaveformVisualizer::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16fdfb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::WaveformVisualizer::__cordl_internal_get__steps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steps;
}
constexpr int32_t const& VROSC::WaveformVisualizer::__cordl_internal_get__steps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steps;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__steps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____steps = value;
}
constexpr ::VROSC::WaveformVisualizer_EdgeBehaviour& VROSC::WaveformVisualizer::__cordl_internal_get__edgeBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____edgeBehaviour;
}
constexpr ::VROSC::WaveformVisualizer_EdgeBehaviour const& VROSC::WaveformVisualizer::__cordl_internal_get__edgeBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____edgeBehaviour;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__edgeBehaviour(::VROSC::WaveformVisualizer_EdgeBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____edgeBehaviour = value;
}
constexpr ::VROSC::WaveformVisualizer_RenderMode& VROSC::WaveformVisualizer::__cordl_internal_get__contionusRecordingBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contionusRecordingBehaviour;
}
constexpr ::VROSC::WaveformVisualizer_RenderMode const& VROSC::WaveformVisualizer::__cordl_internal_get__contionusRecordingBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contionusRecordingBehaviour;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__contionusRecordingBehaviour(::VROSC::WaveformVisualizer_RenderMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contionusRecordingBehaviour = value;
}
constexpr ::VROSC::WaveformVisualizer_RenderMode& VROSC::WaveformVisualizer::__cordl_internal_get__fullRenderBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullRenderBehaviour;
}
constexpr ::VROSC::WaveformVisualizer_RenderMode const& VROSC::WaveformVisualizer::__cordl_internal_get__fullRenderBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullRenderBehaviour;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__fullRenderBehaviour(::VROSC::WaveformVisualizer_RenderMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fullRenderBehaviour = value;
}
constexpr float_t& VROSC::WaveformVisualizer::__cordl_internal_get__defaultVisualNormalization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultVisualNormalization;
}
constexpr float_t const& VROSC::WaveformVisualizer::__cordl_internal_get__defaultVisualNormalization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultVisualNormalization;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__defaultVisualNormalization(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultVisualNormalization = value;
}
constexpr float_t& VROSC::WaveformVisualizer::__cordl_internal_get__windowLengthInSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windowLengthInSeconds;
}
constexpr float_t const& VROSC::WaveformVisualizer::__cordl_internal_get__windowLengthInSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windowLengthInSeconds;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__windowLengthInSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windowLengthInSeconds = value;
}
constexpr float_t& VROSC::WaveformVisualizer::__cordl_internal_get__lastMeasuredPeakValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMeasuredPeakValue;
}
constexpr float_t const& VROSC::WaveformVisualizer::__cordl_internal_get__lastMeasuredPeakValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMeasuredPeakValue;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__lastMeasuredPeakValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastMeasuredPeakValue = value;
}
constexpr int32_t& VROSC::WaveformVisualizer::__cordl_internal_get__visualizationStartIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualizationStartIndex;
}
constexpr int32_t const& VROSC::WaveformVisualizer::__cordl_internal_get__visualizationStartIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualizationStartIndex;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__visualizationStartIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visualizationStartIndex = value;
}
constexpr int32_t& VROSC::WaveformVisualizer::__cordl_internal_get__currentVisualizationIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVisualizationIndex;
}
constexpr int32_t const& VROSC::WaveformVisualizer::__cordl_internal_get__currentVisualizationIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVisualizationIndex;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__currentVisualizationIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentVisualizationIndex = value;
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::WaveformVisualizer::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::WaveformVisualizer::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void VROSC::WaveformVisualizer::__cordl_internal_set__values(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<float_t,::Array<float_t>*> VROSC::WaveformVisualizer::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "get_Values",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(this, ___internal_method);
}
inline void VROSC::WaveformVisualizer::Setup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WaveformVisualizer::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WaveformVisualizer::SetWindowLength(float_t  lengthInSeconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "SetWindowLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lengthInSeconds);
}
inline void VROSC::WaveformVisualizer::Wipe()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WaveformVisualizer::CreateVisualization(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startSample, int32_t  endSample)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "CreateVisualization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioData, startSample, endSample);
}
inline void VROSC::WaveformVisualizer::OnVisualizationUpdated()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WaveformVisualizer::OnPartialVisualizationUpdated(int32_t  startIndex, ::ArrayW<float_t,::Array<float_t>*>  partialValues)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, partialValues);
}
inline void VROSC::WaveformVisualizer::SetValue(int32_t  index, float_t  amount, ::VROSC::WaveformVisualizer_RenderMode  renderMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WaveformVisualizer_RenderMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, amount, renderMode);
}
inline void VROSC::WaveformVisualizer::UpdateVisualization(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  newData, float_t  elapsedTimeSeconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "UpdateVisualization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newData, elapsedTimeSeconds);
}
inline float_t VROSC::WaveformVisualizer::GetVisualPower(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startSample, int32_t  endSample, float_t  normalize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        "GetVisualPower",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, audioData, startSample, endSample, normalize);
}
inline void VROSC::WaveformVisualizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WaveformVisualizer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::WaveformVisualizer* VROSC::WaveformVisualizer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::WaveformVisualizer*>());
}
// Ctor Parameters []
constexpr ::VROSC::WaveformVisualizer::WaveformVisualizer()   {
}
