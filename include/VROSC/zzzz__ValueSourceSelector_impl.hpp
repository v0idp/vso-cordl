#pragma once
// IWYU pragma private; include "VROSC/ValueSourceSelector.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__ValueSourceSelector_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
#include "VROSC/zzzz__ValueSourceSelector_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ValueSourceSelector_ValueSource::ValueSourceSelector_ValueSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::ValueSourceSelector_ValueSource::ValueSourceSelector_ValueSource()   {
}
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::PositionX{static_cast<int32_t>(0x0)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::PositionY{static_cast<int32_t>(0x1)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::PositionZ{static_cast<int32_t>(0x2)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::RotationX{static_cast<int32_t>(0x3)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::RotationY{static_cast<int32_t>(0x4)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::RotationZ{static_cast<int32_t>(0x5)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::Velocity{static_cast<int32_t>(0x6)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::IndexTrigger{static_cast<int32_t>(0x7)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::GripTrigger{static_cast<int32_t>(0x8)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::StickPadX{static_cast<int32_t>(0x9)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::StickPadY{static_cast<int32_t>(0xa)};
constexpr ::VROSC::ValueSourceSelector_ValueSource  VROSC::ValueSourceSelector_ValueSource::DistanceBetweenControllers{static_cast<int32_t>(0xb)};
//  Writing Method size for method: ::VROSC::ValueSourceSelector.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueSourceSelector::*)(::VROSC::Signal*)>(&::VROSC::ValueSourceSelector::NodeBegin)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1721df4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueSourceSelector.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueSourceSelector::*)(::VROSC::Signal*)>(&::VROSC::ValueSourceSelector::NodeStay)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1722120;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueSourceSelector.NodeEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueSourceSelector::*)(::VROSC::Signal*)>(&::VROSC::ValueSourceSelector::NodeEnd)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x172214c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueSourceSelector.GetSignalValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::VROSC::Signal*, ::VROSC::ValueSourceSelector_ValueSource)>(&::VROSC::ValueSourceSelector::GetSignalValue)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1721e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                        "GetSignalValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ValueSourceSelector_ValueSource>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ValueSourceSelector._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ValueSourceSelector::*)()>(&::VROSC::ValueSourceSelector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1722178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::ValueSourceSelector_ValueSource& VROSC::ValueSourceSelector::__cordl_internal_get__valueSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueSource;
}
constexpr ::VROSC::ValueSourceSelector_ValueSource const& VROSC::ValueSourceSelector::__cordl_internal_get__valueSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueSource;
}
constexpr void VROSC::ValueSourceSelector::__cordl_internal_set__valueSource(::VROSC::ValueSourceSelector_ValueSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueSource = value;
}
inline void VROSC::ValueSourceSelector::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ValueSourceSelector::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ValueSourceSelector::NodeEnd(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline float_t VROSC::ValueSourceSelector::GetSignalValue(::VROSC::Signal*  signal, ::VROSC::ValueSourceSelector_ValueSource  valueSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                        "GetSignalValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ValueSourceSelector_ValueSource>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, signal, valueSource);
}
inline void VROSC::ValueSourceSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ValueSourceSelector*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ValueSourceSelector* VROSC::ValueSourceSelector::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ValueSourceSelector*>());
}
// Ctor Parameters []
constexpr ::VROSC::ValueSourceSelector::ValueSourceSelector()   {
}
