#pragma once
// IWYU pragma private; include "VROSC/ParametricPositionSignalGenerator.hpp"
#include "AudioHelm/zzzz__Param_impl.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__ParametricPositionSignalGenerator_def.hpp"
#include "VROSC/zzzz__InstrumentController_def.hpp"
//  Writing Method size for method: ::VROSC::ParametricPositionSignalGenerator.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ParametricPositionSignalGenerator::*)(::VROSC::InstrumentController*)>(&::VROSC::ParametricPositionSignalGenerator::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1724c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ParametricPositionSignalGenerator.ResetGenerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ParametricPositionSignalGenerator::*)()>(&::VROSC::ParametricPositionSignalGenerator::ResetGenerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1724c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                        "ResetGenerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ParametricPositionSignalGenerator.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ParametricPositionSignalGenerator::*)()>(&::VROSC::ParametricPositionSignalGenerator::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724e3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ParametricPositionSignalGenerator.SendPositionalSignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ParametricPositionSignalGenerator::*)()>(&::VROSC::ParametricPositionSignalGenerator::SendPositionalSignal)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x1724c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                        "SendPositionalSignal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ParametricPositionSignalGenerator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ParametricPositionSignalGenerator::*)()>(&::VROSC::ParametricPositionSignalGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1724e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::AudioHelm::Param& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__paramX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paramX;
}
constexpr ::AudioHelm::Param const& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__paramX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paramX;
}
constexpr void VROSC::ParametricPositionSignalGenerator::__cordl_internal_set__paramX(::AudioHelm::Param  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____paramX = value;
}
constexpr ::AudioHelm::Param& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__paramY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paramY;
}
constexpr ::AudioHelm::Param const& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__paramY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paramY;
}
constexpr void VROSC::ParametricPositionSignalGenerator::__cordl_internal_set__paramY(::AudioHelm::Param  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____paramY = value;
}
constexpr ::AudioHelm::Param& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__paramZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paramZ;
}
constexpr ::AudioHelm::Param const& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__paramZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paramZ;
}
constexpr void VROSC::ParametricPositionSignalGenerator::__cordl_internal_set__paramZ(::AudioHelm::Param  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____paramZ = value;
}
constexpr ::UnityW<::VROSC::InstrumentController>& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__instrument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr ::UnityW<::VROSC::InstrumentController> const& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__instrument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrument;
}
constexpr void VROSC::ParametricPositionSignalGenerator::__cordl_internal_set__instrument(::UnityW<::VROSC::InstrumentController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__setup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setup;
}
constexpr bool const& VROSC::ParametricPositionSignalGenerator::__cordl_internal_get__setup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setup;
}
constexpr void VROSC::ParametricPositionSignalGenerator::__cordl_internal_set__setup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setup = value;
}
inline void VROSC::ParametricPositionSignalGenerator::Setup(::VROSC::InstrumentController*  instrument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrument);
}
inline void VROSC::ParametricPositionSignalGenerator::ResetGenerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                        "ResetGenerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ParametricPositionSignalGenerator::OnEnable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ParametricPositionSignalGenerator::SendPositionalSignal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                        "SendPositionalSignal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ParametricPositionSignalGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParametricPositionSignalGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ParametricPositionSignalGenerator* VROSC::ParametricPositionSignalGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ParametricPositionSignalGenerator*>());
}
// Ctor Parameters []
constexpr ::VROSC::ParametricPositionSignalGenerator::ParametricPositionSignalGenerator()   {
}
