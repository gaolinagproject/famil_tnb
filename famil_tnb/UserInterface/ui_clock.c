/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.44                          *
*        Compiled Nov 10 2017, 08:53:57                              *
*        (c) 2017 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END
#include "main.h"
#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0            (GUI_ID_USER + 0x00)
#define ID_EDIT_0            (GUI_ID_USER + 0x02)
#define ID_EDIT_1            (GUI_ID_USER + 0x03)
#define ID_EDIT_2            (GUI_ID_USER + 0x04)
#define ID_EDIT_3            (GUI_ID_USER + 0x05)
#define ID_EDIT_4            (GUI_ID_USER + 0x06)

#define ID_EDIT_6            (GUI_ID_USER + 0x09)
#define ID_EDIT_7            (GUI_ID_USER + 0x0A)

#define ID_EDIT_8            (GUI_ID_USER + 0x0B)
#define ID_EDIT_9            (GUI_ID_USER + 0x0C)

#define ID_EDIT_10            (GUI_ID_USER + 0x0D)
#define ID_EDIT_11            (GUI_ID_USER + 0x0E)


#define ID_BUTTON_0            (GUI_ID_USER + 0x18)
#define ID_BUTTON_1            (GUI_ID_USER + 0x19)

#define ID_BUTTON_2            (GUI_ID_USER + 0x20)
#define ID_BUTTON_3            (GUI_ID_USER + 0x21)
#define ID_BUTTON_4            (GUI_ID_USER + 0x22)
#define ID_BUTTON_5            (GUI_ID_USER + 0x23)

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END
unsigned short ii = 0;
#define EDIT_X 60
/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 320, 240, 0, 0x0, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_0, 5, 25, 80, 40, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_1, 90, 25, 40, 40, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_2, 135, 25, 40, 40, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_3, 180, 25, 40, 40, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_4, 225, 25, 40, 40, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_2, 270, 25,  40, 40, 0, 0x0, 10 },
  

  { EDIT_CreateIndirect, "Edit", ID_EDIT_6, 5+EDIT_X , 80, 40, 40, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_7, 50+EDIT_X , 80, 40, 40, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_3, 100+EDIT_X, 80, 50, 40, 0, 0x0, 10 },
  
  { EDIT_CreateIndirect, "Edit", ID_EDIT_8, 5+EDIT_X , 130, 40, 40, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_9, 50+EDIT_X , 130, 40, 40, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_4, 100+EDIT_X, 130, 50, 40, 0, 0x0, 10 },
  
  { EDIT_CreateIndirect, "Edit", ID_EDIT_10, 5+EDIT_X , 180, 40, 40, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_11, 50+EDIT_X , 180, 40, 40, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_5, 100+EDIT_X, 180, 50, 40, 0, 0x0, 10 },  

  

  { BUTTON_CreateIndirect, "Button", ID_BUTTON_0, 225, 140, 80, 40, 0, 0x0, 10 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_1, 225, 190, 80, 40, 0, 0x0, 10 },
  

  


  
  // USER START (Optionally insert additional widgets)
  // USER END
};
WM_HWIN ui_clock_hWin = NULL;
/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END
static void refresh_page()
{
    WM_HWIN hItem;
    char tmp_str[40] = {0};
    
    sprintf(tmp_str,"%d",data_set_lcd.year);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_0);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    
    sprintf(tmp_str,"%d",data_set_lcd.month);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_1);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    
    sprintf(tmp_str,"%d",data_set_lcd.date);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_2);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    
    sprintf(tmp_str,"%d",data_set_lcd.hour);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_3);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    
    sprintf(tmp_str,"%d",data_set_lcd.min);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_4);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
//    
//
    sprintf(tmp_str,"%d",data_set_lcd.a_clock_hour[0]);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_6);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    
    sprintf(tmp_str,"%d",data_set_lcd.a_clock_min[0]);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_7);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);    

    sprintf(tmp_str,"%d",data_set_lcd.a_clock_hour[1]);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_8);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    
    sprintf(tmp_str,"%d",data_set_lcd.a_clock_min[1]);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_9);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);   
    
    
    sprintf(tmp_str,"%d",data_set_lcd.a_clock_hour[2]);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_10);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    
    sprintf(tmp_str,"%d",data_set_lcd.a_clock_min[2]);
    hItem = WM_GetDialogItem(ui_clock_hWin, ID_EDIT_11);
    EDIT_SetText(hItem, tmp_str);
    EDIT_SetFont(hItem, &GUI_Font_micro_25);
    EDIT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);   
    
    
    
    hItem= WM_GetDialogItem(ui_clock_hWin, ID_BUTTON_2);
    switch(data_set_lcd.week)
    {
      case 0:
        break;
      case 1: button_user_clock_set(hItem," 一 ",NULL,0);
        break;
      case 2: button_user_clock_set(hItem," 二 ",NULL,0);
        break;
      case 3: button_user_clock_set(hItem," 三 ",NULL,0);
        break;
      case 4: button_user_clock_set(hItem," 四 ",NULL,0);
        break;
      case 5: button_user_clock_set(hItem," 五 ",NULL,0);
        break;
      case 6: button_user_clock_set(hItem," 六 ",NULL,0);
        break;
      case 7: button_user_clock_set(hItem," 日 ",NULL,0);
        break;
    }

    hItem= WM_GetDialogItem(ui_clock_hWin, ID_BUTTON_3);
    button_user_clock_set(hItem,"每天",NULL,0);

    hItem= WM_GetDialogItem(ui_clock_hWin, ID_BUTTON_4);
    button_user_clock_set(hItem,"周一",NULL,0);

    hItem= WM_GetDialogItem(ui_clock_hWin, ID_BUTTON_5);
    button_user_clock_set(hItem,"单次",NULL,0);

}
/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem,hWin= pMsg->hWin;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
    
  case WM_TIMER:
//    if(xQueueReceive(ParaSensorQue, &sensor_data_lcd, 0) == pdTRUE){
      refresh_page();
//
//    }
//    
    WM_RestartTimer(pMsg->Data.v, 1000);
    break;
  case WM_PAINT:  
      //TEXT_SetBkColor
//    GUI_SetColor(GUI_BLACK);
//    GUI_DrawHLine(100,0,320);
//    GUI_DrawHLine(140,0,320);
//    GUI_DrawHLine(180,0,320);
//    
//    GUI_DrawVLine(0,100,180);
//    GUI_DrawVLine(160,100,180);
//    GUI_DrawVLine(319,100,180);

    GUI_SetColor(GUI_BLACK);	
    GUI_SetFont(&GUI_Font_micro_25);			
    GUI_SetTextMode(GUI_TM_NORMAL);	
    
    GUI_DispStringHCenterAt(" 年 ",15,0);
    GUI_DispStringHCenterAt(" 月 ",100,0);
    GUI_DispStringHCenterAt(" 日 ",145,0);
    GUI_DispStringHCenterAt(" 时 ",190,0);
    GUI_DispStringHCenterAt(" 分 ",235,0);
    GUI_DispStringHCenterAt(" 星期 ",290,0);
    
    GUI_DispStringHCenterAt("闹钟1:",32,85);
    GUI_DispStringHCenterAt("闹钟2:",32,135);
    GUI_DispStringHCenterAt("闹钟3:",32,185);
    
    refresh_page();
    break;
  case WM_INIT_DIALOG:
    
    hItem= WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    button_user_skin_set(hItem,"确定",NULL,0);

    hItem= WM_GetDialogItem(pMsg->hWin, ID_BUTTON_1);
    button_user_skin_set(hItem,"返回",NULL,0);
    refresh_page();

    

    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_EDIT_0: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,2020,3000,&data_set_lcd.year);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_1: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,1,12,&data_set_lcd.month);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_2: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,1,31,&data_set_lcd.date);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_3: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,0,24,&data_set_lcd.hour);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_4: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,0,59,&data_set_lcd.min);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;


    case ID_EDIT_6: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,0,24,&data_set_lcd.a_clock_hour[0]);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_7: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,0,59,&data_set_lcd.a_clock_min[0]);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
  
    case ID_EDIT_8: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,0,24,&data_set_lcd.a_clock_hour[1]);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_9: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,0,59,&data_set_lcd.a_clock_min[1]);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;

    case ID_EDIT_10: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,0,24,&data_set_lcd.a_clock_hour[2]);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_11: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        keypadEditInt(hWin,Id,0,59,&data_set_lcd.a_clock_min[2]);
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;


    case ID_BUTTON_0: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        
        keypadEditInt(hWin,Id,0,31,&ii);
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        WM_DeleteWindow(pMsg->hWin);
        ui_main();
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
      
    case ID_BUTTON_2: // Notifications sent by 'Button'data_set_lcd
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        
        data_set_lcd.week++;
        if(data_set_lcd.week > 7){
          data_set_lcd.week = 1;
        }
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       ui_clock
*/
WM_HWIN ui_clock(void);
WM_HWIN ui_clock(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
 
  WM_CreateTimer(hWin, 0, 1000, 0);
  
  ui_clock_hWin = hWin;
  
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
