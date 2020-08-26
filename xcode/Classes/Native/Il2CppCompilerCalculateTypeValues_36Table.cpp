#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// WwiseRtpcReference
struct WwiseRtpcReference_tC46D47EFDF249B8565336FEC01CB4C3DBCC37FD7;
// WwiseStateReference
struct WwiseStateReference_t7702859C83E4BF10D9920787A89E019A11A746D4;
// WwiseSwitchReference
struct WwiseSwitchReference_tD70D11C4B4B2AE6B9E4CC751A173D874D92001EA;
// WwiseTriggerReference
struct WwiseTriggerReference_tDC42FF4060B9925F648C38541B77DA6C279707AF;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef BASETYPE_T7E94BB5BC6463B45BA76B2C7BD51C8FEE4739953_H
#define BASETYPE_T7E94BB5BC6463B45BA76B2C7BD51C8FEE4739953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AK.Wwise.BaseType
struct  BaseType_t7E94BB5BC6463B45BA76B2C7BD51C8FEE4739953  : public RuntimeObject
{
public:
	// System.Int32 AK.Wwise.BaseType::idInternal
	int32_t ___idInternal_0;
	// System.Byte[] AK.Wwise.BaseType::valueGuidInternal
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___valueGuidInternal_1;

public:
	inline static int32_t get_offset_of_idInternal_0() { return static_cast<int32_t>(offsetof(BaseType_t7E94BB5BC6463B45BA76B2C7BD51C8FEE4739953, ___idInternal_0)); }
	inline int32_t get_idInternal_0() const { return ___idInternal_0; }
	inline int32_t* get_address_of_idInternal_0() { return &___idInternal_0; }
	inline void set_idInternal_0(int32_t value)
	{
		___idInternal_0 = value;
	}

	inline static int32_t get_offset_of_valueGuidInternal_1() { return static_cast<int32_t>(offsetof(BaseType_t7E94BB5BC6463B45BA76B2C7BD51C8FEE4739953, ___valueGuidInternal_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_valueGuidInternal_1() const { return ___valueGuidInternal_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_valueGuidInternal_1() { return &___valueGuidInternal_1; }
	inline void set_valueGuidInternal_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___valueGuidInternal_1 = value;
		Il2CppCodeGenWriteBarrier((&___valueGuidInternal_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASETYPE_T7E94BB5BC6463B45BA76B2C7BD51C8FEE4739953_H
#ifndef BASEGROUPTYPE_TC2CAA22B764C02A5DE52E33769BDEAC25E435975_H
#define BASEGROUPTYPE_TC2CAA22B764C02A5DE52E33769BDEAC25E435975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AK.Wwise.BaseGroupType
struct  BaseGroupType_tC2CAA22B764C02A5DE52E33769BDEAC25E435975  : public BaseType_t7E94BB5BC6463B45BA76B2C7BD51C8FEE4739953
{
public:
	// System.Int32 AK.Wwise.BaseGroupType::groupIdInternal
	int32_t ___groupIdInternal_2;
	// System.Byte[] AK.Wwise.BaseGroupType::groupGuidInternal
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___groupGuidInternal_3;

public:
	inline static int32_t get_offset_of_groupIdInternal_2() { return static_cast<int32_t>(offsetof(BaseGroupType_tC2CAA22B764C02A5DE52E33769BDEAC25E435975, ___groupIdInternal_2)); }
	inline int32_t get_groupIdInternal_2() const { return ___groupIdInternal_2; }
	inline int32_t* get_address_of_groupIdInternal_2() { return &___groupIdInternal_2; }
	inline void set_groupIdInternal_2(int32_t value)
	{
		___groupIdInternal_2 = value;
	}

	inline static int32_t get_offset_of_groupGuidInternal_3() { return static_cast<int32_t>(offsetof(BaseGroupType_tC2CAA22B764C02A5DE52E33769BDEAC25E435975, ___groupGuidInternal_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_groupGuidInternal_3() const { return ___groupGuidInternal_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_groupGuidInternal_3() { return &___groupGuidInternal_3; }
	inline void set_groupGuidInternal_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___groupGuidInternal_3 = value;
		Il2CppCodeGenWriteBarrier((&___groupGuidInternal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEGROUPTYPE_TC2CAA22B764C02A5DE52E33769BDEAC25E435975_H
#ifndef RTPC_T9A6D7B736865B90AFC601FB61CD5059C77A8CD19_H
#define RTPC_T9A6D7B736865B90AFC601FB61CD5059C77A8CD19_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AK.Wwise.RTPC
struct  RTPC_t9A6D7B736865B90AFC601FB61CD5059C77A8CD19  : public BaseType_t7E94BB5BC6463B45BA76B2C7BD51C8FEE4739953
{
public:
	// WwiseRtpcReference AK.Wwise.RTPC::WwiseObjectReference
	WwiseRtpcReference_tC46D47EFDF249B8565336FEC01CB4C3DBCC37FD7 * ___WwiseObjectReference_2;

public:
	inline static int32_t get_offset_of_WwiseObjectReference_2() { return static_cast<int32_t>(offsetof(RTPC_t9A6D7B736865B90AFC601FB61CD5059C77A8CD19, ___WwiseObjectReference_2)); }
	inline WwiseRtpcReference_tC46D47EFDF249B8565336FEC01CB4C3DBCC37FD7 * get_WwiseObjectReference_2() const { return ___WwiseObjectReference_2; }
	inline WwiseRtpcReference_tC46D47EFDF249B8565336FEC01CB4C3DBCC37FD7 ** get_address_of_WwiseObjectReference_2() { return &___WwiseObjectReference_2; }
	inline void set_WwiseObjectReference_2(WwiseRtpcReference_tC46D47EFDF249B8565336FEC01CB4C3DBCC37FD7 * value)
	{
		___WwiseObjectReference_2 = value;
		Il2CppCodeGenWriteBarrier((&___WwiseObjectReference_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RTPC_T9A6D7B736865B90AFC601FB61CD5059C77A8CD19_H
#ifndef TRIGGER_T87CDAEF18A1B8D61343D5D84B37BE805BB521860_H
#define TRIGGER_T87CDAEF18A1B8D61343D5D84B37BE805BB521860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AK.Wwise.Trigger
struct  Trigger_t87CDAEF18A1B8D61343D5D84B37BE805BB521860  : public BaseType_t7E94BB5BC6463B45BA76B2C7BD51C8FEE4739953
{
public:
	// WwiseTriggerReference AK.Wwise.Trigger::WwiseObjectReference
	WwiseTriggerReference_tDC42FF4060B9925F648C38541B77DA6C279707AF * ___WwiseObjectReference_2;

public:
	inline static int32_t get_offset_of_WwiseObjectReference_2() { return static_cast<int32_t>(offsetof(Trigger_t87CDAEF18A1B8D61343D5D84B37BE805BB521860, ___WwiseObjectReference_2)); }
	inline WwiseTriggerReference_tDC42FF4060B9925F648C38541B77DA6C279707AF * get_WwiseObjectReference_2() const { return ___WwiseObjectReference_2; }
	inline WwiseTriggerReference_tDC42FF4060B9925F648C38541B77DA6C279707AF ** get_address_of_WwiseObjectReference_2() { return &___WwiseObjectReference_2; }
	inline void set_WwiseObjectReference_2(WwiseTriggerReference_tDC42FF4060B9925F648C38541B77DA6C279707AF * value)
	{
		___WwiseObjectReference_2 = value;
		Il2CppCodeGenWriteBarrier((&___WwiseObjectReference_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGER_T87CDAEF18A1B8D61343D5D84B37BE805BB521860_H
#ifndef STATE_T13E0D69F517BC418BBFA14E640F615D7C42D5E6F_H
#define STATE_T13E0D69F517BC418BBFA14E640F615D7C42D5E6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AK.Wwise.State
struct  State_t13E0D69F517BC418BBFA14E640F615D7C42D5E6F  : public BaseGroupType_tC2CAA22B764C02A5DE52E33769BDEAC25E435975
{
public:
	// WwiseStateReference AK.Wwise.State::WwiseObjectReference
	WwiseStateReference_t7702859C83E4BF10D9920787A89E019A11A746D4 * ___WwiseObjectReference_4;

public:
	inline static int32_t get_offset_of_WwiseObjectReference_4() { return static_cast<int32_t>(offsetof(State_t13E0D69F517BC418BBFA14E640F615D7C42D5E6F, ___WwiseObjectReference_4)); }
	inline WwiseStateReference_t7702859C83E4BF10D9920787A89E019A11A746D4 * get_WwiseObjectReference_4() const { return ___WwiseObjectReference_4; }
	inline WwiseStateReference_t7702859C83E4BF10D9920787A89E019A11A746D4 ** get_address_of_WwiseObjectReference_4() { return &___WwiseObjectReference_4; }
	inline void set_WwiseObjectReference_4(WwiseStateReference_t7702859C83E4BF10D9920787A89E019A11A746D4 * value)
	{
		___WwiseObjectReference_4 = value;
		Il2CppCodeGenWriteBarrier((&___WwiseObjectReference_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATE_T13E0D69F517BC418BBFA14E640F615D7C42D5E6F_H
#ifndef SWITCH_T1BBF4BC2833FF88A923276C7512D10921F9D74AE_H
#define SWITCH_T1BBF4BC2833FF88A923276C7512D10921F9D74AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AK.Wwise.Switch
struct  Switch_t1BBF4BC2833FF88A923276C7512D10921F9D74AE  : public BaseGroupType_tC2CAA22B764C02A5DE52E33769BDEAC25E435975
{
public:
	// WwiseSwitchReference AK.Wwise.Switch::WwiseObjectReference
	WwiseSwitchReference_tD70D11C4B4B2AE6B9E4CC751A173D874D92001EA * ___WwiseObjectReference_4;

public:
	inline static int32_t get_offset_of_WwiseObjectReference_4() { return static_cast<int32_t>(offsetof(Switch_t1BBF4BC2833FF88A923276C7512D10921F9D74AE, ___WwiseObjectReference_4)); }
	inline WwiseSwitchReference_tD70D11C4B4B2AE6B9E4CC751A173D874D92001EA * get_WwiseObjectReference_4() const { return ___WwiseObjectReference_4; }
	inline WwiseSwitchReference_tD70D11C4B4B2AE6B9E4CC751A173D874D92001EA ** get_address_of_WwiseObjectReference_4() { return &___WwiseObjectReference_4; }
	inline void set_WwiseObjectReference_4(WwiseSwitchReference_tD70D11C4B4B2AE6B9E4CC751A173D874D92001EA * value)
	{
		___WwiseObjectReference_4 = value;
		Il2CppCodeGenWriteBarrier((&___WwiseObjectReference_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCH_T1BBF4BC2833FF88A923276C7512D10921F9D74AE_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3600 = { sizeof (RTPC_t9A6D7B736865B90AFC601FB61CD5059C77A8CD19), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3600[1] = 
{
	RTPC_t9A6D7B736865B90AFC601FB61CD5059C77A8CD19::get_offset_of_WwiseObjectReference_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3601 = { sizeof (State_t13E0D69F517BC418BBFA14E640F615D7C42D5E6F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3601[1] = 
{
	State_t13E0D69F517BC418BBFA14E640F615D7C42D5E6F::get_offset_of_WwiseObjectReference_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3602 = { sizeof (Switch_t1BBF4BC2833FF88A923276C7512D10921F9D74AE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3602[1] = 
{
	Switch_t1BBF4BC2833FF88A923276C7512D10921F9D74AE::get_offset_of_WwiseObjectReference_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3603 = { sizeof (Trigger_t87CDAEF18A1B8D61343D5D84B37BE805BB521860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3603[1] = 
{
	Trigger_t87CDAEF18A1B8D61343D5D84B37BE805BB521860::get_offset_of_WwiseObjectReference_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
